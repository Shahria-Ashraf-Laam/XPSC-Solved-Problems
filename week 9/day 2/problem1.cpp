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
        vector<int> v(4,0);
        string s; cin>>s;

        for(int i=0; i<s.size(); i++)
        {
            if(s[i] != '?')
            {
                if( v[s[i]-65] < n )
                {
                    v[s[i]-65]++;
                }
            }
        }
        cout<< v[0]+v[1]+v[2]+v[3] <<"\n";
    }

    return 0;
}





/*
problem link : https://codeforces.com/problemset/problem/1993/A
details: week-9, random-2
*/