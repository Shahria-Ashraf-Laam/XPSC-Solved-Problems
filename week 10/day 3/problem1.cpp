#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n; cin>>n;
    vector<ll> v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    sort(v.begin(),v.end());

    int q; cin>>q;
    for(int i=1; i<=q; i++)
    {
        ll l,r; cin>>l>>r;
        auto it1 = lower_bound(v.begin(), v.end(), l);
        auto it2 = upper_bound(v.begin(), v.end(), r);
        cout<< it2-it1 <<" ";
    }

    return 0;
}



/*
problem link: https://codeforces.com/edu/course/2/lesson/6/1/practice/contest/283911/problem/D
details: week-10, topicwise-5 (problem-D, Fast Search)
*/
