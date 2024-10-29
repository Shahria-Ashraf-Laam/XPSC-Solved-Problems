#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a,b,c; cin>>a>>b>>c;
    int mult = 1;
    while(1)
    {
        int ans = c * mult;
        if( ans > b ){
            cout<< -1 <<"\n";
            break;
        }else if( ans>=a && ans<=b ){
            cout<< ans <<"\n";
            break;
        }

        mult++;
    }


  return 0;
}

/*
problem link: https://atcoder.jp/contests/abc220/tasks/abc220_a?lang=en
problem sheet: week-1,random-B(find multiple)
*/