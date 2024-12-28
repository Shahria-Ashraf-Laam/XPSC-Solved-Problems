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
        vector<int> v(1001,0);
        int n; cin>>n;
        int maxo = -1;
        for(int i=1; i<=n; i++)
        {
            int x; cin>>x;
            v[x]=i;
        }

        for(int i=1; i<=100; i++)
        {
            for(int j=1; j<=100; j++)
            {
                if(v[i] && v[j] && __gcd(i,j)==1)
                {
                    maxo = max(maxo,v[i]+v[j]);
                }
            }
        }

        cout<< maxo <<"\n";
    }

    return 0;
}





/*
problem link: https://codeforces.com/problemset/problem/1742/D
details: week-9, topicwise-14
*/
