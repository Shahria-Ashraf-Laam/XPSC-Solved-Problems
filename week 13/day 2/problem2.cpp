#include<bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
#define ll int64_t
#define all(v) v.begin(), v.end()
#define yes cout<< "YES" <<endl
#define no cout<< "NO" <<endl
#define endl "\n"


int main()
{
    fastio()
    int t; cin>>t;
    while(t--)
    {
        string s; cin>>s;
        string main = "abc";
        if(main==s){
            yes;
        }else{
            int cnt = 0;
            for(int i=0; i<s.size(); i++)
            {
                if(main[i] != s[i]) cnt++;
            }

            (cnt==2) ? yes:no;
        }
    }

    
    return 0;
}



/*
problem link: https://codeforces.com/problemset/problem/1873/A
problem details: week-13, problem- A - Short Sort
*/