#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    ll l, r;
    cin>>l>>r;
    cout<<"YES\n";
    for (int i = 0; i <= (r - l) / 2; i++)
    {
        cout<< l+i*2 <<" "<< l+i*2+1<<'\n';
    }

    return 0;
}



/*
problem link: https://codeforces.com/problemset/problem/1051/B
details: week-9, topicwise-7
*/
