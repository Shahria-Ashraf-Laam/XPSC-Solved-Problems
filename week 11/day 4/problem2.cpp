#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        vector<int> v(n);
        map<int, int> mp;

        for(int i=0; i<n; i++)
        {
            cin>>v[i];
            mp[v[i]]++;
        }

        int ans = 0;
        for(auto it: mp)
        {
            ans += (it.second/3);
        }
        cout<< ans <<'\n';
    }


    return 0;
}


/*
link: https://codeforces.com/problemset/problem/1957/A
details: week-11, problem-E(stickoGon)
*/
