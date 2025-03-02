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
    fastio();
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        string s; cin>>s;
        for(int i=0; i<n; i++)
        {
            if(i>1)
            {
                if(s[i+1]=='a'||s[i+1]=='e')cout<<".";
            }
            cout<<s[i];
        }
        cout<<endl;
    }

    return 0;
}



/*
week-14, random problem - C - Unnatural Language Processing
link:  https://codeforces.com/problemset/problem/1915/D
*/