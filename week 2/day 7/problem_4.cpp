#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--)
    {
        int n,k;
        string s;
        cin>>n>>k>>s;

        map<char,int> cnt;
        for(int i=0; i<n; i++)
        {
            cnt[s[i]]++;
        }

        int oddCount = 0;
        for( auto it : cnt )
        {
            if( it.second % 2 != 0 )
            {
                oddCount++;
            }
        }

        if( k < oddCount-1 ) cout<<"NO\n";
        else cout<<"YES\n";
    }

    return 0;
}

/*
problem link- https://codeforces.com/problemset/problem/1883/B
problem sheet: week-2, random-G(chemistry)
*/
