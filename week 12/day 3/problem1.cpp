#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

    int n; cin>>n;
    vector<int> v(n+1);
    for(int i=1; i<=n; i++){
        cin>>v[i];
    }

    vector<int> result(n+1);
    for(int i=1; i<=n; i++)
    {
        result[ v[i] ] = i;
    }
    for(int i=1; i<=n; i++)
    {
        cout<< result[i] <<" ";
    }
    
    return 0;
}




/*
problem link: https://codeforces.com/contest/136/problem/A
*/