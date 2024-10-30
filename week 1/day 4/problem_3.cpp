#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    map<pair<string,string>,bool> mp;
    int n; cin>>n;
    for(int i=1; i<=n; i++)
    {
        string a,b; cin>>a>>b;
        mp[{a,b}] = true;
    }

    cout<< mp.size() <<"\n";


  return 0;
}

/*
problem link: https://codeforces.com/contest/44/problem/A
problem sheet: week-1, topicwise-3(indian summer)
*/