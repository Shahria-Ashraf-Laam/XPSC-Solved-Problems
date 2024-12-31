#include<bits/stdc++.h>
using namespace std;
#define ll long long

void appleDiv( int i, int n, ll sum1, ll sum2, vector<ll> &v, ll &mini )
{
    if(i==n)
    {
        mini = min(mini, abs(sum1-sum2));
        return;
    }
    appleDiv(i+1, n, sum1+v[i], sum2, v, mini);
    appleDiv(i+1, n, sum1, sum2+v[i], v, mini);
}


void solve()
{
    ll n, mini=LONG_MAX; cin>>n;
    vector<ll> v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }

    appleDiv(0,n,0,0,v,mini);
    cout<< mini <<"\n";
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    solve();
    
    return 0;
}




/*
problem link: https://cses.fi/problemset/task/1623
details: week-10, random-2
*/
