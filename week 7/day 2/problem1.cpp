#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--)
    {
        int n, sum=0; cin>>n;
        vector<int> v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
            sum = sum | v[i];
        }

        cout<< sum <<"\n";
    }

    return 0;
}




/*
link- https://codeforces.com/problemset/problem/1635/A
week-7, topicwise-11
*/