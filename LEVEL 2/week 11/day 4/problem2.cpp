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


    int n; cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++)  { cin>>v[i]; }
    sort(all(v));

    auto ok = [&](int time)             //Lambda Function
    {
        int cnt = 1, l=0;
        for(int r = 0; r<n; r++)
        {
            if( (v[r]-v[l]) > 2*time )
            {
                cnt ++;
                l = r;
            }
        }

        return cnt <= 3;    //cnt jodi 3 er choto ba shoman hoy tahole true return korbe, amader worker asei 3 jon!
    };


    ll l = 0, r = 1e9, mid, ans;
    while(l<=r)
    {
        mid = l + (r-l)/2;
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


    }   //while loop of test case ends here


    return 0;
}




/*
week-11, topic problem - C - Wooden Toy Festival
link: https://codeforces.com/problemset/problem/1840/D
*/