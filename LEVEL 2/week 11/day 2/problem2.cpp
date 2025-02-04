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
        int n; cin>>n;
        set<int> st;
        for(int i=0; i<n; i++)
        {
            int x; cin>>x;
            st.insert(x);     //set e element gulo first e nicchi cz amader duplicate element er kono kaj nei
        }

        vector<int> v;
        for(auto val : st){
            v.push_back(val);  //erpor set theke element gulo vector e nicchi, set e kintu element sorted hoyei thake
        }

        int result = INT_MIN;
        for(int i=0; i<v.size(); i++)
        {
            int val = v[i]+n;
            int it = lower_bound( all(v), val) - v.begin() - i; //v.begin() biyog korsi karon lower bound na paile lower_bound func.
            result = max(result,it);                           //v.end() return kore. Tai if diya alada condition jeno likhte na hoy
        }                                               //sejonno v.begin() biyog korsi. v.end()-v.begin() korle vector er size print hoy!

        cout<< result <<'\n';
    }


    return 0;
}





/*
link : https://codeforces.com/problemset/problem/1928/B
week-11, random problem - F - Equalize
*/