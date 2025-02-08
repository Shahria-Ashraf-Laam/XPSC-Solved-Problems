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
        int n,k; cin>>n>>k;


        auto ok = [&](int mid)
        {
            return (mid-(mid/n)) >= k;
        };


        int  l = 1, r = 2e9, mid, ans;
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

    }


    return 0;
}



/*
week-11, topic problem - E - K-th Not Divisible by n
link: https://codeforces.com/problemset/problem/1352/C
*/