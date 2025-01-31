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
        int n=8;
        char arr[n][n];
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                cin>>arr[i][j];
            }
        }
        
        bool red;
        for(int i=0; i<n; i++)
        {
            red = true;
            for(int j=0; j<n; j++)
            {
                if(arr[i][j] != 'R' ){
                    red = false;
                    break;   //stops checking this row
                }
            }
            if(red==true) break;
        }

        (red==true) ? cout<<"R\n":cout<<"B\n";     //ternary operator
    }

    
    return 0;
}



/*
link: https://codeforces.com/problemset/problem/1742/C
week-13, problem - F - Stripes
*/