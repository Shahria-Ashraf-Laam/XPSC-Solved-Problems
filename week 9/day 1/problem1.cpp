#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin>>v[i];
        }


        sort(v.begin(),v.end());
        cout<< v[(n/2)] <<"\n";
    }

    return 0;
}






/*
problem link : https://codeforces.com/problemset/problem/2003/B
details: week-9, random-1
*/