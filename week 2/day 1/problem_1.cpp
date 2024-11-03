#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x; cin>>n>>x;
    vector<int> v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }

    for( int val : v)
    {
        if(val==x) continue;
        else cout<<val<<" ";
    }


    return 0;
}

/*
problem link- https://atcoder.jp/contests/abc191/tasks/abc191_b?lang=en
problem sheet: week-2, random-A(remove it)
*/
