#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n; cin>>n;
    vector<ll> v(n), prefix(n+1);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    
    for(int i=1; i<=n; i++){
        prefix[i] = prefix[i-1] + v[i-1];
    }

    int q; cin>>q;
    for(int i=1; i<=q; i++)
    {
        ll key; cin>>key;
        auto it = lower_bound(prefix.begin(), prefix.end(), key);
        cout<< it-prefix.begin() <<'\n';
    }

    return 0;
}




/*
problem link: https://codeforces.com/contest/474/problem/B
details: week-10, topicwise-7
*/
