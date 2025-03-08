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
    fastio();
    int q; cin>>q;
    map<ll,ll> diff;
    while(q--)
    {
        ll l,r; cin>>l>>r;
        diff[l]++;
        diff[r+1]--;
    }

    ll ans = INT_MIN;
    ll sum = 0;
    for(auto [key, val] : diff)
    {
        sum += val;
        ans = max(ans,sum);
    }
    cout<< ans <<endl;


    return 0;
}


/*
Difference Array er problem eta
link: https://cses.fi/problemset/task/1619
week-14, topicwise problem - C - Restaurant Customers
*/
