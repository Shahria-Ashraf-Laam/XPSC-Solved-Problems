#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--)
    {
        int a,b,c; cin>>a>>b>>c;
        if(c>a)cout<<"+\n";
        else cout<<"-\n";
    }


    return 0;
}

/*
problem link- https://codeforces.com/problemset/problem/1807/A
problem sheet: week-2, random-C(Plus or Minus)
*/