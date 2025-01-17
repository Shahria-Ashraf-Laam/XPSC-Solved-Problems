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
        int n, show, day; cin>>n>>show>>day;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        int left = 0, right = 0, result = INT_MAX;
        set<int> st;
        map<int, int> freq;

        while(right < n)
        {
            freq[v[right]]++;
            st.insert(v[right]);

            while(right - left + 1 > day)
            {
                freq[v[left]]--;
                if (freq[v[left]] == 0)
                {
                    st.erase(v[left]);
                }
                left++;
            }

            if (right - left + 1 == day)
            {
                result = min(result, static_cast<int>(st.size()));  //static_cast<int> chara ei line e error show kore
            }                                                       // st.size() min er bhitor use kora jay na arki

            right++;
        }

        cout << result << '\n';
    }

    return 0;
}
