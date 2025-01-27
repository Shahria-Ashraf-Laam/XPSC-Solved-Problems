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
        sort( all(v) );

        ll result = 1;
        v[0] += 1;
        for(int i=0; i<n; i++){
            result *= v[i];
        }
        cout<< result <<'\n';
    }

    
    return 0;
}



/*
link:  https://codeforces.com/problemset/problem/1873/B
week-12, problem: B - Good Kid
*/