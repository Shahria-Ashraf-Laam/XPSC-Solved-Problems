#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    ll n,x,sum=0,ans=0;
    cin>>n>>x;

    map<ll,ll> mp;
    mp[0]=1;

    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }

    for(int i=0; i<n; i++)
    {
        sum += v[i];
        ans += mp[sum-x];
        mp[sum]++;
    }
    cout<< ans <<'\n';

    return 0;
}




/*
problem link: https://cses.fi/problemset/task/1660
details: week-10, random-3 (subarray sums 1)
*/
