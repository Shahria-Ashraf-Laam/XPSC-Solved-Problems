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
        int zero = 0, one = 0, pair;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='1') one++;
            else zero++;
        }
        pair = min(zero,one);

        if(pair%2 == 1) cout<<"DA\n";
        else cout<<"NET\n";
    }

    
    return 0;
}
