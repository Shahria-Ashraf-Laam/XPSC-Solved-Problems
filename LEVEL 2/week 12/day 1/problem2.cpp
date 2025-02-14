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
        for(int i=0; i<n; i++) cin>>v[i];

        int ones = 0, zeros = 0;
        for(int i=0; i<n; i++)
        {
            if(v[i]==1) ones++;
            if(v[i]==0) zeros++;
        }

        ll ans = pow(2,zeros) * ones;
        cout<< ans  <<"\n";
    }


    return 0;
}



/*
week-12, random problem - A - Luntik and Subsequences
link:  https://codeforces.com/problemset/problem/1582/B
*/
