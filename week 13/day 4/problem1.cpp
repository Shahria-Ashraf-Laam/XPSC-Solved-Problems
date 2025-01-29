#include<bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
#define ll int64_t
#define all(v) v.begin(), v.end()
#define yes cout<< "YES" <<endl
#define no cout<< "NO" <<endl
#define endl "\n"

int count_one_block(string s)
{
    int count = 0;
    for(int i=0; i<s.size(); i++)
    {
        if( s[i]=='1' && (i==0 || s[i-1]=='0') )
        {
            count++;
        }
    }

    return count;
}

int main()
{
    fastio()
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        string s; cin>>s;

        int one_block = count_one_block(s);
        if( is_sorted(all(s)) ) cout<< 0 <<'\n';
        else
        {
            if( s[n-1] == '0' )
            {
                cout<< (one_block*2)-1 <<'\n';
            }
            else
            {
                cout<< (one_block-1)*2 <<'\n';
            }
        }
    }

    
    return 0;
}



/*
link: https://codeforces.com/problemset/problem/1732/B
week-13, problem - G - Ugu

etar observation ami ber korsi.
Last e one thakle ans hobe :  (one_block * 2) - 1
Last e zero thakle ans hobe : (one_block - 1) * 2
*/
