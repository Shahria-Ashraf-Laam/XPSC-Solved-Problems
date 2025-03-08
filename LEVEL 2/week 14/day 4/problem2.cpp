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

    ll sum = 0;
    bool ok = true;
    for(auto [key, val] : diff)
    {
        sum += val;
        if(sum>2)
        {
            ok = false;
            break;
        }
    }

    if(ok) yes;
    else no;

    return 0;
}



/*
week-14, topicwise problem - B - Two TVs
link:  https://codeforces.com/problemset/problem/845/C
*/