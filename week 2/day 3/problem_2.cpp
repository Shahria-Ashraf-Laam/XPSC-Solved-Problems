#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin>>n;
    multiset<int> ml;
    for(int i=1; i<=n; i++)
    {
        int x; cin>>x;
        ml.insert(x);
    }

    int ans = 0, problem = 1;
    while(1)
    {
        auto LB = ml.lower_bound(problem);
        if( LB != ml.end() )
        {
            ans++;
            problem++;
            ml.erase(LB);
        }
        else
        {
            break;
        }
    }

    cout<< ans <<"\n";


    return 0;
}

/*
problem link- https://codeforces.com/problemset/problem/1165/B
problem sheet: week-2, topicwise-2(Polycarp Training)
*/
