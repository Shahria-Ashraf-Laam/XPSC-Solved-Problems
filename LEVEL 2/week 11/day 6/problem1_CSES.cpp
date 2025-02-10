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
    int n,p; cin>>n>>p;
    vector<int> v(n);
    for(int i=0; i<n; i++) { cin>>v[i]; }

    auto ok = [&](ll seconds)
    {
        ll count  = 0;
        for(int i=0; i<n; i++)
        {
            count += (seconds/v[i]);
            if(count>=p) return true;
        }

        return count>=p;
    };

    /*suppose machine ase 1 ta, product banate hobe 10^9 ta. Ar machine tar 1 ta banaite somoy lage 10^9 seconds.
    Tahole 10^9 ta product banate somoy lagbe 10^9 X 10^9 second means 10^18 jeta int type e store hobena, tai long long newa*/
    ll l = 1, r = 1e18, mid, ans;
    while(l<=r)
    {
        mid = l+(r-l)/2;
        if( ok(mid) )
        {
            ans = mid;
            r = mid-1;
        }
        else
        {
            l = mid+1;
        }
    }
    cout<< ans <<'\n';


    return 0;
}


/*
week-11, topic problem - B - Factory Machines
link: https://cses.fi/problemset/task/1620
*/