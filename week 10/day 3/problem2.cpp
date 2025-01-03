#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t; cin>>t;
    while(t--)
    {
        int n, q; cin>>n>>q;
        vector<int> v(n), prefix(n+1);
        for(int i=0; i<n; i++) {
            cin>>v[i];
        }
        sort(v.rbegin(), v.rend());

        for(int i=1; i<=n; i++) {
            prefix[i] = prefix[i-1] + v[i-1];
        }

        for(int i=1; i<=q; i++)
        {
            int key, ans = -1;
            cin>>key;
            
            auto it = lower_bound(prefix.begin(), prefix.end(), key);
            if( it != prefix.end() )
            {
                ans = it - prefix.begin();
            }
            cout<< ans <<'\n';
        }
    }

    return 0;
}




/*
problem link: https://codeforces.com/problemset/problem/1676/E
details: week-10, topicwise-4 (eating queries)
*/
