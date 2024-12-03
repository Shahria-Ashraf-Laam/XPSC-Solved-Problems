#include<bits/stdc++.h>
using namespace std;
//#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a,b; cin>>a>>b;
    int year=0;
    while(1)
    {
        year++;
        a = a*3, b = b*2;
        if(a>b)
        {
            cout<< year ;
            break;
        }
    }

    return 0;
}


/*
problem link: https://codeforces.com/problemset/problem/791/A
*/