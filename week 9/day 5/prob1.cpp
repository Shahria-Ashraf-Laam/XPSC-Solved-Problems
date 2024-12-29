#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    ll n,a,b,p,q; cin>>n>>a>>b>>p>>q;
    ll a_count = n/a;
    ll b_count = n/b;
    ll common = n / ((a / __gcd(a,b))*b);
    
    if(p>=q){           // p>=q disi karon p & q duita same hoile jeno p er value tai count kore
        cout<< (a_count * p) + ((b_count - common) * q);
    }
    else{
        cout<< ((a_count - common) * p) + (b_count * q);
    }
    
    return 0;
}



/*
problem link: https://codeforces.com/problemset/problem/678/C
details: week-9, topicwise-3
*/
