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
        int n; cin>>n;
        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin>>v[i];
        }

        if(n==2){
            cout<< v[0]+v[1] <<'\n';
        }else{
            int result = INT_MIN;
            for(int i=0; i<n-1; i++)
            {
                result = max(result, v[i]+v[n-1]);
            }
            cout<< result <<'\n';
        }


    }
    return 0;
}




/*
link: https://codeforces.com/problemset/problem/1978/A
week-13 problem- I - Alice and Books
*/