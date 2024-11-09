#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--)
    {
        int n,m; cin>>n>>m;
        map<int,set<int>> mp;
        for( int i=1; i<=n; i++ )
        {
            int x; cin>>x;
            mp[x].insert(i);
        }


        for(int i=1; i<=m; i++ )
        {
            int left,right; cin>>left>>right;
            if( mp.find(left)==mp.end() || mp.find(right)==mp.end() )
            {
                cout<<"NO\n";
            }
            else
            {
                int LeftMostIndex = *(mp[left].begin());
                int RightMostIndex = *(mp[right].rbegin());
                if( LeftMostIndex < RightMostIndex )
                {
                    cout<< "YES\n";
                }
                else
                {
                    cout<< "NO\n";
                }
            }
        }
    }


    return 0;
}

/*
problem link- https://codeforces.com/problemset/problem/1702/C
problem sheet: week-2, topicwise-4(Train and Queries)
*/
