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
    int t; cin >> t;
    while (t--) 
    {
        int n; cin >> n;
        
        vector<int> a(n);
        vector<bool> vis0(102, false), vis1(102, false);

        for (int i = 0; i < n; ++i) 
        {
            cin >> a[i];
            if (!vis0[a[i]]) 
                vis0[a[i]] = true;
            else 
                vis1[a[i]] = true;
        }

        int ansa = 0, ansb = 0;
        while (vis0[ansa]) ++ansa;
        while (vis1[ansb]) ++ansb;

        cout << ansa + ansb << '\n';
    }
}



/*
link: https://codeforces.com/problemset/problem/1406/A
week-13, problem - C - Subset Mex
*/