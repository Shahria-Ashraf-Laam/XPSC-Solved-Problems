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
        int move,cube; cin>>move>>cube;
        if(move<cube){
            no;
        }else{
            if( (move-cube)%2==0 ) yes;
            else no;
        }
    }


    return 0;
}



/*
link: https://codeforces.com/problemset/problem/1977/A
week-13 problem- J - Little Nikita
*/
