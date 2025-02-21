#include<bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
#define ll int64_t
#define all(v) v.begin(), v.end()
#define yes cout<< "YES" <<endl
#define no cout<< "NO" <<endl
#define endl "\n"

vector<int> primes = {2,3,5,7,11,13,17,19,23,29,31};

int main()
{
    fastio();
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        vector<int> v(n);
        for(int i=0; i<n; i++) cin>>v[i];

        map< int,vector<int> > mp;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<primes.size(); j++)
            {
                if( v[i] % primes[j] == 0 )
                {
                    mp[primes[j]].push_back(i);
                    break;
                }
            }
        }


        vector<int> ans(n);
        int color = 1;
        for(auto [x,y] : mp)
        {
            for(auto pos : y)
            {
                ans[pos] = color;
            }
            color++;
        }


        cout<< mp.size() <<endl;
        for(int i=0; i<n; i++)
        {
            cout<< ans[i] <<" ";
        }
        cout<<endl;
    }


    return 0;
}


/*
ei problem er multiple answer possible, tai amader answer given answer er sathe milbena
link: https://codeforces.com/problemset/problem/1332/B
week-12, topicwise problem - composite coloring
*/