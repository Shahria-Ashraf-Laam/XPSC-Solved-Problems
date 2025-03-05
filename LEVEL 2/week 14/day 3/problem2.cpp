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
    fastio();
    int n; cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    sort(all(v));

    map<int,int> mp;
    int left = 0, right = n-1;
    for(int i = 0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            mp[ v[i]+v[j] ]++;
        }
    }

    int ans = INT_MIN;
    for( auto it : mp )
    {
        //ans = max(ans, static_cast<int>(it.second)); jodi ll er sathe ll compare kora lage tokhon ei line lagbe
        ans = max(ans, it.second);
    }
    cout<< ans <<endl;

    return 0;
}



/*
week-14, random problem - E - Mike and Children
link:  https://codeforces.com/problemset/problem/1121/B
*/
