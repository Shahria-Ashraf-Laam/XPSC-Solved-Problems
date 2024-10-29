#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a,b; cin>>a>>b;
    int ans1 = a + (a-1);  // a duibar chaple
    int ans2 = b + (b-1);  //b duibar chaple
    int ans3 = a + b;     // a ar b chaple

    cout<< max({ans1,ans2,ans3}) <<"\n";

  return 0;
}

/*
problem link: https://atcoder.jp/contests/abc124/tasks/abc124_a?lang=en
problem sheet: week-1, random-C(buttons)
*/