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

    if( is_sorted(all(v)) ){
        yes;
        return;
    }

    vector<int> result;
    int last = 0;
    for(int i=0; i<n; i++)
    {
        int left = v[i]/10;     //45 er left hocche 4, right hocche 5. Amader bola hoise element thakbei 0-99 er moddhe
        int right = v[i]%10;
        if( left>=last && right>=left )
        {
            result.push_back(left);
            result.push_back(right);
            last = right;
        }
        else
        {
            result.push_back(v[i]);
            last = v[i];
        }
    }

    if( is_sorted(all(result)) ) yes;
    else no;
}


int main()
{
    fastio()
    int t; cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}




/*
link : https://codeforces.com/problemset/problem/1948/B
week-11, random problem - E - Array Fix
*/