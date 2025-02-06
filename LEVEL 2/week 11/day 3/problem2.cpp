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
    ll n, ans = 0; cin>>n;
    map<tuple<ll,ll,ll>, ll> mp;
    vector<ll> v(n);
    for(int i=0; i<n; i++) { cin>>v[i]; }

    for(int i=0; i+2<n; i++)
    {
        ans += ( mp[{v[i],v[i+1],-1}] + mp[{v[i],-1,v[i+2]}] + mp[{-1,v[i+1],v[i+2]}] - 3*mp[{v[i],v[i+1],v[i+2]}] );
        mp[{v[i],v[i+1],-1}]++;
        mp[{v[i],-1,v[i+2]}]++;
        mp[{-1,v[i+1],v[i+2]}]++;
        mp[{v[i],v[i+1],v[i+2]}]++;
    }

    cout<< ans <<"\n";
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
link : https://codeforces.com/problemset/problem/1974/C
week-11, random problem - G - Beautiful Triple Pairs
*/