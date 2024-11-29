#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--)
    {
        int n,XOR=0; cin>>n;
        vector<int> v;
        for(int i=0; i<n; i++)
        {
            int x; cin>>x;
            v.push_back(x);
            XOR ^= x;
        }
        
        int ans = XOR;
        for(int i=0; i<n; i++)
        {
            int currentXOR = ( XOR ^ v[i] );   
            ans = min(ans,currentXOR);
        }
        cout<< ans <<"\n";
    }

  return 0;
}


/*
problem link: https://www.codechef.com/problems/MINMXOR
problem details: week-5, topicwise-2(minimum xor)
*/