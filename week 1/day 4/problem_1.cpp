#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s; cin>>s;
    int cnt[26]={0};
    for( int i=0; i<s.size(); i++ )
    {
        int val = s[i]-97;
        cnt[val]++;
    }

    for( int i=0; i<26; i++ )
    {
        if( cnt[i]==0 )
        {
            cout<< char(i+'a') <<"\n";
            return 0;
        }
    }

    cout<<"None\n";

  return 0;
}

/*
problem link: https://atcoder.jp/contests/abc071/tasks/abc071_b?lang=en
problem sheet: week-1, random-F(not found)
*/