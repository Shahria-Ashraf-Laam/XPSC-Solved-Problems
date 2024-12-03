#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,k; cin>>n>>k;
    vector<int> v(n+1);
    for(int i=1; i<n+1; i++)
    {
        cin>>v[i];
    }

    int ans=0, mark=v[k];
    for(int i=1; i<n+1; i++)
    {
        if(v[i]>=mark && v[i]>0) ans++;
    }
    cout<<ans<<"\n";

    return 0;
}


/*
problem link: https://codeforces.com/problemset/problem/158/A
*/