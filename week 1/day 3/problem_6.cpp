#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int s,t; cin>>s>>t;
    int ans = 0;
    for( int i=0; i<=s; i++ )
    {
        for( int j=0; j<=s; j++ )
        {
            for( int k=0; k<=s; k++ )
            {
                if( i+j+k <= s && i*j*k <= t ) ans++;
            }
        }
    }

    cout<< ans <<"\n";

  return 0;
}

/*
problem link: https://atcoder.jp/contests/abc214/tasks/abc214_b?lang=en
problem sheet: week-1, random-G(how many?)
*/