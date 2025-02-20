#include<bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
#define ll int64_t
#define all(v) v.begin(), v.end()
#define yes cout<< "YES" <<endl
#define no cout<< "NO" <<endl
#define endl "\n"

bool perfectSquare(ll x)
{
    ll root = sqrtl(x);  //long long value er jonno sqrt na, sqrtl use korte hoy
    return (root*root) == x;
}

bool isPrime(ll x)
{
    if(x==1) { return false; }

    for(int i=2; i*i<=x; i++)
    {
        if(x % i == 0) return false;
    }

    return true;
}


int main()
{
    fastio();
    int n; cin>>n;
    for(int i=1; i<=n; i++)
    {
        ll x; cin>>x;
        if( perfectSquare(x) && isPrime(sqrtl(x)) ) yes;       //if er moddhe obosshoi perfectsquare er condition ta aage dite hobe!
        else no;               //isPrime(sqrtl(x)) karon given value er square root value ta prime kina seta amader jante hobe
    }

    return 0;
}


/*
link : https://codeforces.com/problemset/problem/230/B
week-12, topic problem - T-Primes
*/