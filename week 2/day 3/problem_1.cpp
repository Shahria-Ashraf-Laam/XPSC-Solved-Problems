#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m; cin>>n>>m;
    vector<int> v1(n+1);
    vector<int> v2(n+1);
    set<int> st;

    for(int i=1; i<=n; i++ )
    {
        cin>>v1[i];
    }
    for( int i=n; i>=1; i--)
    {
        st.insert(v1[i]);
        v2[i]=st.size();
    }
    
    for( int j=1; j<=m; j++ )
    {
        int x; cin>>x;
        cout<< v2[x] <<"\n";
    }

    return 0;
}

/*
problem link- https://codeforces.com/problemset/problem/368/B
problem sheet: week-2, topicwise-1(Sereja and Suffixes)
*/
