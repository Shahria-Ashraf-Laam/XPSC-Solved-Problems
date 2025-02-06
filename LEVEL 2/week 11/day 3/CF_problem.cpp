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
    int mc = 0, cc = 0;
    for(int i=1; i<=n; i++)
    {
        int m,c; cin>>m>>c;
        if(m>c) mc++;
        else if(m<c) cc++;
    }

    if(mc>cc) cout<<"Mishka\n";
    else if(mc<cc) cout<<"Chris\n";
    else cout<<"Friendship is magic!^^\n";

    return 0;
}


/*
link: https://codeforces.com/problemset/problem/703/A
*/