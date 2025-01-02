#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    ll n; cin>>n;
    vector<int> v;
    for(int i=0; i<n; i++)
    {
        ll k; cin>>k;
        auto it = upper_bound(v.begin(), v.end(), k);   //upper bound, lower bound jene nao aage
        if( it == v.end() )
        {
            v.push_back(k);    
        }
        else
        {
            *it = k;
        }
    }
    cout<< v.size() <<'\n';

    return 0;
}




/*
problem link: https://cses.fi/problemset/task/1073
details: week-10, random-8(towers)
*/
