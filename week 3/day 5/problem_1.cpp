#include<bits/stdc++.h>
using namespace std;
#define all(x) x.begin(), x.end()

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--)
    {
        int size,k; cin>>size>>k;
        string s; cin>>s;
        int l=0,r=0,ans=INT_MAX,cntS=0;

        if(size==k){
            cout<< count(all(s),'W') <<"\n";
            continue;
        }

        while(r<size)
        {
            if( s[r]=='W' ){
                cntS++;
            }
            
            if(r-l+1 == k){
                ans = min(ans,cntS);
                if( s[l]=='W' ){
                    cntS--;
                }

                l++;
            }
            
            r++;
        }

        cout<< ans <<"\n";

    }

  return 0;
}

/*
problem link- https://codeforces.com/problemset/problem/1690/D
problem sheet: week-3, topicwise-6(Black and White Stripe)
*/