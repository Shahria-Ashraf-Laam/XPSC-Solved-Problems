#include<bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
#define ll int64_t
#define all(v) v.begin(), v.end()
#define yes cout<< "YES" <<endl
#define no cout<< "NO" <<endl
#define endl "\n"

void solve()
{
    int n; cin>>n;
    ll total_a = 0, total_b = 0;
    for(int i=0; i<n; i++)
    {
        ll x; cin>>x;
        if(x==1){
            total_b += 2;        //karon 1 ke komano jabena ar, tai 1 er jaygay 2 likhte hobe. this is the minimum!
        }else{
            total_b++;       //x jehetu 1 theke boro tai amra minimum 1 likhte parbo x er bodole b array te
        }

        total_a += x;        // shob value jog kora hocche a array er jonno
    }

    if(n==1){
        no;
    }
    else{
        if( total_b <= total_a ) yes;
        else no;
    }
}

int main()
{
    fastio()
    int t; cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}



/*
week-11, random problem - A - Good Arrays
link:  https://codeforces.com/problemset/problem/1856/B
*/