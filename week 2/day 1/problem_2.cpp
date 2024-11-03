#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s,t; cin>>s>>t;
    int diff=0;
    if( s==t )
    {
        cout<<0<<"\n";
    }
    else
    {
        for(int i=0; i<s.size(); i++)
        {
            if( s[i] != t[i] ) diff++;
        }
        cout<< diff <<"\n";
    }


    return 0;
}

/*
problem link- https://atcoder.jp/contests/abc172/tasks/abc172_b?lang=en
problem sheet: week-2, random-B(Minor Changet)
*/
