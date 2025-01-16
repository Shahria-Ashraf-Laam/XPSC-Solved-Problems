#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n; cin>>n;
    string s; cin>>s;

    int plus=0, minus=0;
    for(int i=0; i<n; i++){
        if(s[i]=='+') plus++;
        else minus++;
    }
    cout<< abs(plus-minus) <<'\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t; cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}


/*
link: https://codeforces.com/problemset/problem/1919/B
details: week-11, problem-F(Plus-Minus Split)
*/
