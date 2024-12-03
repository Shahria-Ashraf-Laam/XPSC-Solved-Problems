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
        int n; cin>>n;
        if(n%2==1){
            cout<<"NO\n";
        }
        else{
            string ans,pattern="MMNN";
            int count=0;

            while(count<n)
            {
                for(char c : pattern)
                {
                    if(count==n) break;
                    ans += c;
                    count++;
                }
            }
            cout<<"YES\n";
            cout<< ans <<"\n";
        }
    }

    return 0;
}




/*
problem link: https://codeforces.com/problemset/problem/1948/A
problem details: week-5, random-1(special charcters)
*/