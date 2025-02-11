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
        ll n; cin>>n;
        ll l = 2, r = 2e9, mid, ans = 1, tmp;

        while(l<r)
        {
            mid = l + (r-l)/2;
            tmp = (mid * (mid-1))/2;
            if(tmp==n)
            {
                ans = mid;
                break;
            }

            if(tmp>n)
            {
                r = mid;
            }
            else
            {
                l = mid+1;
                ans = mid;
            }
        }

        ll current = (ans * (ans-1))/2;
        cout<< ans+n-current <<'\n';
    }


    return 0;
}



/*
link: https://codeforces.com/problemset/problem/1862/D
week-11, topicwise problem - K - Ice Cream Balls

*/