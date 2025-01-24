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
    fastio()
    int t; cin>>t;
    while(t--)
    {
        int n,s,m; cin>>n>>s>>m;
        int initime = 0;                   // initime = initial time
        bool result = false;
        while(n--)
        {
            int left, right; cin>>left>>right;
            if(left-initime >= s)
            {
                result = true;
                //break;
            }
            
            initime = right;
        }

        // if(result)
        // {
        //     yes;
        // }
        // else if( result==false && m-initime >= s)
        // {
        //     yes;
        // }
        // else
        // {
        //     no;
        // }

        if(m-initime >= s) result = true;
        (result) ? yes:no;
    }

    
    return 0;
}

/*
link: https://codeforces.com/problemset/problem/1999/C
week-12, problem: D - Showering
*/