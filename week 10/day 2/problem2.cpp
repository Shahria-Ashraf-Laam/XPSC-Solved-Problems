#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n,q; cin>>n>>q;
    vector<int> v(n);
    for(int i=0; i<n; i++) {
        cin>>v[i];
    }

    for(int i=0; i<q; i++)
    {
        int key, l=0, r=n-1, ans=n, mid; 
        cin>>key;

        
        while (l<=r)
        {
            mid = (l+r)/2;
            if(key<=v[mid])
            {
                ans = mid;
                r = mid-1;
            }
            else
            {
                l = mid+1;
            }
        }
        cout<< ans+1 <<'\n';  
    }


    return 0;
}




/*
problem link: https://codeforces.com/edu/course/2/lesson/6/1/practice/contest/283911/problem/C
details: week-10, topicwise-3
*/
