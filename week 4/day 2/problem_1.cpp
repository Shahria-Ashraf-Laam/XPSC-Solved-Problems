#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    long long k; 
    cin>>n>>k;
    vector<ll> v(n);
    for( int i=0; i<n; i++ ){
        cin>>v[i];
    }

    ll l=0,r=0,ans=0;
    multiset<ll> m;
    while(r<n)
    {
        m.insert(v[r]);
        ll mn = *m.begin(), mx = *m.rbegin();
        if( mx-mn <= k )
        {
            ans += r-l+1;
        }
        else
        {
            while(l<=r)
            {
                mn = *m.begin(), mx = *m.rbegin();
                if(mx-mn <= k)
                {
                    break;
                }
                m.erase(m.find(v[l]));
                l++;
                
            }

            mn = *m.begin(), mx = *m.rbegin();
            if( mx-mn <= k )
            {
                ans += r-l+1;
            }

        }

        r++;
    }

    cout<< ans <<"\n";

  return 0;
}


/*
problem link- https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/F
problem sheet: week-4, Topicwise-6(Segments with Small Spread)
*/