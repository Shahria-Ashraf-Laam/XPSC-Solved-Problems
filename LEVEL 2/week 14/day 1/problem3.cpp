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
        int n,k; cin>>n>>k;
        char arr[n][n];
        for(int i=0; i<n; i++) {
            for(int j=0; j<n; j++) {
                cin>> arr[i][j];
            }
        }


        for(int i=0; i<n; i+=k)
        {
            for(int j=0; j<n; j+=k)
            {
                cout<<arr[i][j];
            }
            cout<<endl;
        }

    }

    return 0;
}



/*
week-14, random problem - B - Scale
link:  https://codeforces.com/problemset/problem/1996/B
*/
