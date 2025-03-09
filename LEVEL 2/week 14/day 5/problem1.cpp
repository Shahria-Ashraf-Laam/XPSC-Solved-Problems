#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define fastio() ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
#define ll int64_t
#define all(v) v.begin(), v.end()
#define yes cout<< "YES" <<endl
#define no cout<< "NO" <<endl
#define endl "\n"
template <typename T> using pbds = tree<T, null_type, less_equal<T>, //ekhane less_equal nisi kaorn amader same value multiple times ase
rb_tree_tag, tree_order_statistics_node_update>;                    //less_equal mane multiset, less mane set


int main()
{
    fastio();
    int n,m; cin>>n>>m;

    pbds<int> p;
    for(int i=1; i<=n; i++)
    {
        int x; cin>>x;
        p.insert(x);
    }

    for(int i=1; i<=m; i++)
    {
        int x; cin>>x;
        cout<< p.order_of_key(x+1) <<" ";
    }
    cout<<endl;


    return 0;
}



/*
week-14, topicwise problem - F - Queries about less or equal elements
link:  https://codeforces.com/problemset/problem/600/B
*/