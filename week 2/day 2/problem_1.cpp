#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string right = "Timur";
    sort(right.begin(),right.end());
    int t; cin>>t;
    while(t--)
    {
        int len; cin>>len;
        string st; cin>>st;
        if(len==5)
        {
            sort(st.begin(),st.end());
            (right==st) ? cout<<"YES\n":cout<<"NO\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }

    return 0;
}

/*
problem link- https://codeforces.com/problemset/problem/1722/A
problem sheet: week-2, random-D(Spell Check)
*/
