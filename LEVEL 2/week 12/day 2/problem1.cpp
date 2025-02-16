#include<bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
#define ll int64_t
#define all(v) v.begin(), v.end()
#define yes cout<< "YES" <<endl
#define no cout<< "NO" <<endl
#define endl "\n"

void solve()
{
    int n; cin>>n;
    vector<int> v(n+1), ans(n+1);
    set<int> st;
    for(int i=1; i<=n; i++)
    {
        cin>>v[i];
        st.insert(i);
    }

    if(n==1)
    {
        cout<< -1 <<"\n";
        return;
    }

    for(int i=1; i<=n; i++)
    {
        auto it = st.begin();
        if( v[i] != *it )
        {
            ans[i] = *it;
            st.erase( it );
        }
        else
        {
            if( st.size() == 1 )
            {
                ans[i] = *it;
                st.erase( it );
                swap( ans[i], ans[i-1]);
            }
            else
            {
                it++;
                ans[i] = *it;
                st.erase( it );
            }
        }
    }

    for(int i=1; i<=n; i++) { cout<< ans[i] <<" "; }
    cout<<endl;
}


int main()
{
    fastio()
    int t; cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}



/*
week-12, random problem - C - Mystic Permutation
link:  https://codeforces.com/problemset/problem/1689/B
*/