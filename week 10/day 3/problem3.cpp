#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n; cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++) {
        cin>>v[i];
    }
    sort(v.begin(), v.end());

    int q; cin>>q;
    for(int i=1; i<=q; i++)
    {
        int key; cin>>key;
        auto it = upper_bound(v.begin(), v.end(), key);
        cout<< it - v.begin() <<'\n';
    }

    return 0;
}




/*
problem link: https://codeforces.com/contest/706/problem/B
details: week-10 topicwise-6
*/
