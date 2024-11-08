#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int query, customer=1; cin>>query;
    vector<int> ans;
    set<pair<int,int>> s;
    multiset<pair<int,int>> ml;
    for( int i=1; i<=query; i++ )
    {
        int type; cin>>type;
        if(type==1)
        {
            int money; cin>>money;
            s.insert({customer, money});
            ml.insert({money, -customer});
            customer++;
        }
        else if(type==2)
        {
            int pos = s.begin()->first, money = s.begin()->second;
            ans.push_back(pos);
            s.erase(s.begin());
            ml.erase({money, -pos});
        }
        else
        {
            int pos = -ml.rbegin()->second, money = ml.rbegin()->first;
            ans.push_back(pos);
            ml.erase(--ml.end());
            s.erase({pos,money});
        }
    }

    for(int val : ans)
    {
        cout<< val <<"\n";
    }
    

    return 0;
}

/*
problem link- https://codeforces.com/problemset/problem/1468/C
problem sheet: week-2, topicwise-5(Berpizza)
*/
