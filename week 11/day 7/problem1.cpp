#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k; cin>>n>>k;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        if (v[0] == v[n - 1])
        {
            int count = 0;
            for (int i = 0; i < n; i++)
            {
                if (v[i] == v[0])
                    count++;
            }
            if (count >= k)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
        else
        {
            int s = -1, e = -1, count = 0;
            for (int i = 0; i < n; i++)
            {
                if (v[i] == v[0])
                    count++;
                if (count == k)
                {
                    s = i;
                    break;
                }
            }

            count = 0;
            for (int i = n - 1; i >= 0; i--)
            {
                if (v[i] == v[n - 1])
                    count++;
                if (count == k)
                {
                    e = i;
                    break;
                }
            }

            if (s != -1 && e != -1 && s < e)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }

    return 0;
}



/*
link: https://codeforces.com/problemset/problem/1851/C
details: week-11, problem-M(tiles comeback)
*/