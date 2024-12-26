#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    ll n,k; cin>>n>>k;
    vector<ll> divisor;
    for(int i=1; i<=sqrt(n); i++)
    {
        if(n%i==0)
        {
            divisor.push_back(i);
            if(i != n/i)
            {
                divisor.push_back(n/i);
            }
        }
    }
    sort(divisor.begin(), divisor.end());
    if(divisor.size()<k) cout<< -1 <<'\n';
    else cout<< divisor[k-1] <<'\n';

    return 0;
}



/*
problem link: https://codeforces.com/problemset/problem/762/A
details: week-9, topicwise-1
*/
