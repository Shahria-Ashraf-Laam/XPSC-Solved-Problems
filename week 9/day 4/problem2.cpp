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
        int n; cin>>n;
        int i = 1, count = 1;
        while(i<n)
        {
            ll tmp = (i+1)* 2ll;
            count++;
            i=tmp;
        }
        cout<< count <<"\n";
    }

    return 0;
}





/*
problem link: https://codeforces.com/problemset/problem/1618/C
details: week-9, random-5
*/
