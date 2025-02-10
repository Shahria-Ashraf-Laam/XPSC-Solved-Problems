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
        int n; cin>>n;
        vector<int> v(n);
        for(int i=0; i<n; i++) { cin>>v[i]; }
        sort(all(v));

        int ans = 0;
        for(int i=n; i>=0; i--)
        {
            int cnt = 0, k1 = i;
            vector<int> result = v;
            int l = 0, r =n-1, step =1;
            while(l<=r)
            {
                int req = k1+1-step;
                while( result[r] > req)
                {
                    r--;
                }

                if(step>=i) { ans = i; }
                if(r<0 || r<l) { break; }
                if( result[r]<=req ) {
                    r--;
                    result[l] += req;
                    l++, step++;
                }
            }

            if(step>=i+1) {
                ans = max(ans,i);
                break;
            }
        }

        cout<< ans <<'\n';
    }


    return 0;
}



/*
week-11, topic problem - I - Number Game
link: https://codeforces.com/problemset/problem/1749/C
*/