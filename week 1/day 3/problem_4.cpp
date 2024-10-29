#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin>>n;
    if( n<10 ) cout<<"000"<<n <<"\n";
    else if( n<100 ) cout<<"00"<<n <<"\n";
    else if( n<1000 ) cout<<"0"<<n <<"\n";
    else if( n<10000 ) cout<< n <<"\n";

  return 0;
}

/*
problem link: https://atcoder.jp/contests/abc222/tasks/abc222_a?lang=en
problem sheet: week-1, random-D(four digits)
*/