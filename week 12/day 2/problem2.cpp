#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        string s; cin >> s;

        int cnt0 = 0, cnt1 = 0;
        if (s[0] == '0') cnt0++;
        else cnt1++;

        for (int i = 1; i<n; i++)
        {
            if(s[i] != s[i - 1])
            {
                if(s[i] == '0')cnt0++;
                else cnt1++;
            }
        }

        cout << min(cnt0,cnt1) << '\n';
    }

    return 0;
}

