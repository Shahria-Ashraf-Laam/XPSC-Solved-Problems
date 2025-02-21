#include<bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
#define ll int64_t
#define all(v) v.begin(), v.end()
#define yes cout<< "YES" <<endl
#define no cout<< "NO" <<endl
#define endl "\n"

void solve()
{
    int n; cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    map<int, int> count;
    for(int i=0; i<n; i++)
    {
        for( int j=2; j*j <= v[i]; j++)   //prime facto. SPF method Code
        {
            while( v[i] % j == 0 )
            {
                count[ j ]++;
                v[i] = v[i]/j;
            }
        }
        if(v[i] > 1) {
            count[ v[i] ]++;
        }
    }

    for(auto [x,y]: count)
    {
        if( y%n != 0) {
            no;
            return;
        }
    }
    yes;
}


int main()
{
    fastio();
    int t; cin>>t;
    while(t--)
    {
        solve();
    }


    return 0;
}


/*
link : https://codeforces.com/problemset/problem/1881/D
week-12, topic problem - Divide and Conquer
*/