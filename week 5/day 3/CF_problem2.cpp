#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t,ans=0; cin>>t;
    while(t--)
    {
        int x,count=0;
        for(int i=1; i<=3; i++)
        {
            cin>>x;
            if(x==1) count++;
        }
        if(count>=2) ans++;
    }
    cout<< ans <<"\n";

    return 0;
}


/*
problem link: https://codeforces.com/problemset/problem/231/A
*/