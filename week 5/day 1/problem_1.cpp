#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--)
    {
        int x; cin>>x;
        for(int i=x; i>=1; i--)
        {
            cout<< i <<" ";
        }
        cout<<"\n";
    }

  return 0;
}

/*
problem link: https://www.codechef.com/problems/PERMOR
problem details: week-5, topicwise-1(or permutation)
*/