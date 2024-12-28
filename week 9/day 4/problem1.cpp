#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t; cin>>t;
    while(t--)
    {
        int n; string s;
        cin>>n>>s;

        ll lasts = 1, firstp = n;
        for(int i=0; i<n; i++)
        {
            if( s[i]=='p' && firstp > i )
            {
                firstp = i+1;
            }
            if( s[i]=='s' )
            {
                lasts = i+1;
            }
        }

        if(lasts==1 || firstp==n) cout<<"YES\n";
        else cout<<"NO\n";
    }

    return 0;
}



/*
problem link: https://codeforces.com/problemset/problem/2049/B
details: week-9, random-4
*/
