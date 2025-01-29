#include<bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
#define ll int64_t
#define all(v) v.begin(), v.end()
#define yes cout<< "YES" <<endl
#define no cout<< "NO" <<endl
#define endl "\n"

int block_of_one(string s)
{
    int count = 0;
    for(int i=0; i<s.size(); i++)
    {
        if( s[i] == '1'  && (i==0 || s[i-1]=='0') )
        {
            count++;
        }
    }

    return count;
}

int main()
{
    fastio()
    string s; cin>>s;
    cout<< block_of_one(s) <<'\n';
    
    return 0;
}
