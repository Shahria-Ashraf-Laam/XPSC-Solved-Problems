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
        int n,k; cin>>n>>k;
        vector<int> v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }

        if( is_sorted(v.begin(),v.end()) )
        {
            cout<< 0 <<'\n';
        }
        else
        {
            int cnt = 0;
            for(int i=0; i<n; i++)
            {
                int tmp = abs( v[i] - (i+1) );  //i+1 karon problem e 1 based index kora hoise
                if(tmp%k) cnt++;
            }

            if(cnt>2) cout<< -1 <<'\n';
            else if(cnt==2) cout<< 1 <<'\n';
            else cout<< 0 <<'\n';
        }
    }

    return 0;
}



/*
problem link : https://codeforces.com/problemset/problem/1823/B
details: week-9, random-3
*/