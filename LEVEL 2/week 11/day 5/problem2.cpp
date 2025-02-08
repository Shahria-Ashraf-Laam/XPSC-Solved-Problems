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

        ll n,k; cin>>n>>k;
        vector<ll> v(k);
        for(ll i=0; i<k; i++) { cin>>v[i]; }
        sort(v.rbegin(), v.rend());

        v[0] = n-v[0];
        for(ll i=1; i<k; i++)
        {
            v[i] = n - v[i] + v[i-1];
        }

        ll l = 0, r = k-1, mid;
        while(l<=r)
        {
            mid = l+(r-l)/2;
            if( v[mid] <= n-1 )
            {
                l++;
            }
            else
            {
                r--;
            }
        }
        cout<< l <<'\n';

    }


    return 0;
}



/*
week-11, topic problem - H - Save More Mice
link: https://codeforces.com/problemset/problem/1593/C
*/