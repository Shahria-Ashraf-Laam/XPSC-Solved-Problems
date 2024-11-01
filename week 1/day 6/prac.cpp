#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<string> v;
    int n; cin>>n;
    for( int i=1; i<=n; i++ )
    {
        string s; cin>>s;
        auto it = find(v.begin(), v.end(), s);
        if( it == v.end() )
        {
            v.push_back(s);
        }
        else
        {
            v.erase(it);
            v.push_back(s);
        }
    }

    // for(int val : v)
    // cout<< val <<" ";

    // cout<<endl;

    // int target = 3;
    // auto it = find(v.begin(), v.end(), target);

    // if (it != v.end()) {
    //     cout << "Element found at position: " << distance(v.begin(), it) << endl;
    // } else {
    //     cout << "Element not found" << endl;
    // }

    // v.erase(it);
    // for(int val : v)
    // cout<< val <<" ";

    for( int i= v.size()-1; i>=0; i-- )
    {
        cout<< v[i] <<"\n";
    }




  return 0;
}


/*
problem link- https://codeforces.com/problemset/problem/637/B
problem sheet: week-1, topicwise-9(chat order)
*/