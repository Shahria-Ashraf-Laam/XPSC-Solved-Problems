#include<bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
#define ll int64_t
#define all(v) v.begin(), v.end()
#define yes cout<< "YES" <<endl
#define no cout<< "NO" <<endl
#define endl "\n"


int main()
{
    fastio()
    int t; cin>>t;
    while(t--)
    {
        int length, n; cin>>length>>n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
        }
        sort( all(v) );

        int one_count = 0, brk_count = 0;
        for(int i=0; i<n-1; i++)  //last element er aag porjonto loop chalabo
        {
            if( v[i] == 1) one_count++;
            else
            {
                brk_count += (v[i]-1);     // 3 ke venge 1 1 1 banate 3-1=2 step lage
                one_count += v[i];
            }
        }
        
        cout<< one_count + brk_count <<"\n";
    }

    
    return 0;
}



/*
link:  https://codeforces.com/problemset/problem/1992/B
week-12, problem: E - Angry Monk
*/