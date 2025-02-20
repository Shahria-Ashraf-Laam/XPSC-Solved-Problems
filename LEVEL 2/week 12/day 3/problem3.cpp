#include<bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
#define ll int64_t
#define all(v) v.begin(), v.end()
#define yes cout<< "YES" <<endl
#define no cout<< "NO" <<endl
#define endl "\n"

bool two_prime_divisor(int x)
{
    map<int,int> mp;
    for(int i=2; i*i<=x; i++)   //orime factorization using spf
    {
        while( x % i == 0 )
        {
            mp[i]++;
            x  = x/i;
        }
    }
    if(x>1) { mp[x]++; }


    if(mp.size()==2) return true;
    else return false;
}


int main()
{
    fastio();
    int n; cin>>n;
    int count = 0;
    for(int i=2; i<=n; i++)
    {
        if( two_prime_divisor(i) ) count++;
    }

    cout<< count <<"\n";


    return 0;
}


// 24 = 2*2*2*3   ekhane unique 2 ta prime divisor e ase tai eta almost prime
/*
link: https://codeforces.com/problemset/problem/26/A
week-12, topicwise - Almost Prime
*/