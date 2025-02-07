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
    int n,k; cin>>n>>k;
    vector<int> v(n);
    for(int i=0; i<n; i++)  { cin>>v[i]; }
    sort(all(v));

    auto ok = [&](ll mid)             //Lambda Function
    {
        ll cnt = 0;
        for(int i = n/2; i<n; i++)
        {
            if( v[i] < mid )
            {
                cnt += (mid-v[i]);    // cnt += (v[i]<mid ? mid-v[i]:0);  if er ei 4 line er jaygay ei line likhleo hoto
            }

            if(cnt>k) { return false; }   //tahole porer step gulo ar korar lagbe na, kichu iteration beche jabe
        }

        return cnt <= k;    //cnt jodi k er choto ba shoman hoy tahole true return korbe
    };


    ll l = 1, r = 1e18, mid, ans;
    while(l<=r)
    {
        mid = l + (r-l)/2;
        if( ok(mid) )
        {
            ans = mid;
            l = mid+1;
        }
        else
        {
            r = mid-1;
        }

    }
    cout<< ans <<'\n';


    return 0;
}




/*
week-11, topic problem - D - Maximum Median
link: https://codeforces.com/problemset/problem/1201/C
*/