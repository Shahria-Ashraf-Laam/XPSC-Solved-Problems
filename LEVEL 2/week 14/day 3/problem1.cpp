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
    string s; cin>>s;
    stack<char> stk;
    int win = 1;    //1 aagei diya nisi karon kono move dite na parle 2nd player jitbe

    for(int i=0; i<s.size(); i++)
    {
        if( stk.empty()==false && s[i] == stk.top() )  //stack empty thakle stk.empty() true return kore
        {
            stk.pop();
            win++;
        }
        else
        {
            stk.push( s[i] );
        }
    }

    if(win%2==0) yes;  //win even hoile yes, odd hoile no
    else no;

    return 0;
}



/*
week-14, random problem - F - Game with string
link:  https://codeforces.com/problemset/problem/1104/B
*/
