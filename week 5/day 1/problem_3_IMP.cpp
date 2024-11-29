#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--)
    {
        int n,ans=0; cin>>n;
        vector<int> v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
            ans ^= v[i];
        }
        
        if(n%2==0)
        {
            if(ans==0) cout<< 0 <<"\n";
            else cout<< -1 <<"\n";
        }
        else cout<< ans <<"\n";

    }

    return 0;
}

//conditio fill hoile output na milte pare, expected output er sathe but AC hobe. karon ques e bola ase j,
// It can be shown that if a valid number x exists, then there also exists x such that (0 ≤ x < 2^8).

/*
problem link: https://codeforces.com/problemset/problem/1805/A
problem details:  week-5, topicwise-3
explanation : https://www.youtube.com/watch?v=zX5I5pWbIzg
*/