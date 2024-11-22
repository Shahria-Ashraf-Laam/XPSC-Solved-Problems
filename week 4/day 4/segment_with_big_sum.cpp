#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    long long k; 
    cin>>n>>k;
    vector<int> v(n);
    for( int i=0; i<n; i++ ){
        cin>>v[i];
    }

    int l=0,r=0,ans=INT_MAX;
    long long sum=0;
    bool available = false;
    while(r<n)
    {
        sum += v[r];
        if( sum < k )
        {
            r++;
        }
        else
        {
            available = true;
            ans = min(ans,r-l+1);
            sum -= v[l];
            l++;
            while(sum>=k)
            {
                ans = min(ans,r-l+1);
                sum -= v[l];
                l++;
            }
            r++;
        }
    }

    if(available) cout<< ans <<"\n";
    else cout<< -1 <<"\n";

  return 0;
}


/*
problem link- https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/B
problem sheet: week-4, Topicwise-2(Segment with Big Sum)
*/