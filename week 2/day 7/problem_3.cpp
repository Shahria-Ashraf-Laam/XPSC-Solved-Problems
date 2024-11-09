#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--)
    {
        int size; cin>>size;
        int diff=0;
        string s1,s2; cin>>s1>>s2;
        for( int i=0; i<size; i++ )
        {
            if( (s1[i]=='G'&&s2[i]=='B') || (s1[i]=='B'&&s2[i]=='G') )
            {
                continue;
            }
            else if( s1[i] != s2[i] )
            {
                diff++;
                break;
            }
        }
        
        if(diff==0) cout<<"YES\n";
        else cout<<"NO\n";
    }

    return 0;
}

/*
problem link- https://codeforces.com/problemset/problem/1722/B
problem sheet: week-2, random-F(Colourblindness)
*/
