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
    int n; cin>>n;
    if(n%2==0)
    {
        cout<< n/2 <<endl;
        for(int i=1; i<= n/2; i++)
        {
            cout<< 2 <<" ";
        }
        cout<<endl;
    }
    else
    {
        cout<< n/2 <<endl;
        for(int i=1; i<n/2; i++)
        {
            cout<< 2 <<" ";
        }
        cout<< 3;
        cout<<endl;
    }

    return 0;
}



/*
link: https://codeforces.com/problemset/problem/749/A
week-12, topicwise problem - F - Bachgold Problem
*/