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
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
//ekhane same value multiple times ase tao less nisi karon multiset e
//value remove kora jay na
//less_equal mane multiset, less mane set


int main()
{
    fastio();
    int n,k; cin>>n>>k;

    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    pbds< pair<int,int> > p;
    int l=0, r=0;
    while(r<n)
    {
        p.insert({ v[r],r });
        if(r-l+1 == k)
        {
            int pos = k/2;
            if(k%2==0) pos--;

            auto it = p.find_by_order(pos); //pointer return kore
            cout<< it->first <<" ";        //tai amader ekhane dereference kora lagse

            p.erase({ v[l],l });
            l++;
        }
        r++;
    }
    cout<<endl;


    return 0;
}



/*
week-14, topicwise problem - H - Sliding Window Median
link:  https://cses.fi/problemset/task/1076
*/