#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        vector<int> mn(n), st(n);
        for(int i=0; i<n; i++)
        {
            cin>>mn[i];
        }
        for(int i=0; i<n; i++)
        {
            cin>>st[i];
        }

        int diff=0;
        for(int i=0; i<n-1; i++)
        {
            if( mn[i]>st[i+1] )
            {
                diff += (mn[i]-st[i+1]);
            }
        }
        diff += mn[n-1];
        cout<< diff <<"\n";
    }

    return 0;
}









/*
problem link: https://codeforces.com/contest/2051/problem/A
*/