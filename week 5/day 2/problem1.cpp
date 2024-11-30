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
        ll x,y; cin>>x>>y;
        cout<< 1LL*(x^y) <<"\n";
    }

    return 0;
}



/*
problem link: https://codeforces.com/problemset/problem/1421/A
problem details: week-5, topicwise-4(XORwice)
*/