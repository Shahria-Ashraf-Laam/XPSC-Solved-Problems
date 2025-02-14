#include<bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
#define ll int64_t
#define all(v) v.begin(), v.end()
#define yes cout<< "YES" <<endl
#define no cout<< "NO" <<endl
#define endl "\n"


int main()
{
    fastio()
    int t; cin>>t;
    while(t--)
    {
        int n,m; cin>>n>>m;
        vector<int> v(n);
        for(int i=0; i<n; i++) cin>>v[i];
        sort(v.rbegin(), v.rend());

        ll chair = 0;
        chair += 2*v[0];
        for(int i=1; i<n-1; i++)
        {
            chair += v[i];
        }

        if( chair+n <= m ) yes;
        else no;
    }


    return 0;
}


/*
week-12, random problem - B - Social Distance
link:  https://codeforces.com/problemset/problem/1668/B
*/