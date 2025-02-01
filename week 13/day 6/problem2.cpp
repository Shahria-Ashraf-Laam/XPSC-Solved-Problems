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
    int n; cin>>n;
    vector<int> v(n);
    for( auto &x : v) cin>>x;        //range base loop er maddhome input nisi, good tecnique!

    int max = v[0];
    bool flag = true;
    for(int i=0; i<n; i++)
    {
        if( v[i] > max+1 || v[i]>i ){
            cout<< i+1 <<'\n';
            flag = false;
            break;
        }

        if( v[i] > max ){
            max = v[i];
        }
    }

    if(flag) cout<< -1 <<'\n';


    return 0;
}



/*
link: https://codeforces.com/problemset/problem/1054/B
week-13, problem - N - Appending Mex
*/