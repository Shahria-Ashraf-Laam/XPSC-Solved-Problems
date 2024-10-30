#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long int sum = 0;
    vector<long long int> odd;
    int n; cin>>n;
    for(int i=1; i<=n; i++)
    {
        int x;
        cin>>x;
        if( x%2==0 )
        {
            sum+=x;
        }
        else
        {
            odd.push_back(x);
        }
    }

    sort(odd.begin(),odd.end(),greater<long long int>());
    if( odd.size() % 2==0 )
    {
        for( int i=0; i<odd.size(); i++ )
        {
            sum += odd[i];
        }
    }
    else
    {
        for( int i=0; i<odd.size()-1; i++ )
        {
            sum += odd[i];
        }
    }

    cout<< sum <<"\n";


  return 0;
}

/*
problem link: https://codeforces.com/problemset/problem/621/A
problem sheet: week-1, random-H(wet shark)
*/