#include<bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
#define ll int64_t
#define all(v) v.begin(), v.end()
#define yes cout<< "YES" <<endl
#define no cout<< "NO" <<endl
#define endl "\n"


int main()
{
    fastio();
    int t; cin>>t;
    while(t--)
    {
        int a,b,c; cin>>a>>b>>c;
        int total = a+b+c;
        if(total % 2 == 1)   //total kokhono odd hobena
        {
            cout<< -1 <<endl;
        }
        else
        {
            cout<< min(a+b, total/2) <<endl;
        }

    }


    return 0;
}



/*
week-14, random problem - A - Chess For Three
link:  https://codeforces.com/problemset/problem/1973/A
*/