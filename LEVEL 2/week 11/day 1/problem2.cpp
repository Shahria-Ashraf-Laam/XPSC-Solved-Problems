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
        vector<pair<int,int>> v(n);
        for(int i=0; i<n; i++){
            cin>>v[i].first;
            v[i].second = i;
        }

        vector<int> present(n);
        for(int i=0; i<n; i++){
            cin>>present[i];
        }
        sort(all(v)), sort(all(present));

        vector<int> ans(n);
        for(int i=0; i<n; i++)
        {
            ans[ v[i].second ] = present[i];
        }

        for(int val : ans)
        {
            cout<< val <<" ";
        }
        cout<<endl;

    }


    return 0;
}



/*
week-11, random problem - B - Restore the Weather
link:  https://codeforces.com/problemset/problem/1833/B
*/
