#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a,b,t; cin>>a>>b>>t;
    int ans = t/a;
    cout<< b*ans <<"\n";

  return 0;
}

/*
problem link: https://atcoder.jp/contests/abc125/tasks/abc125_a?lang=en
problem sheet: week-1, random-E(biscuit generator)
*/