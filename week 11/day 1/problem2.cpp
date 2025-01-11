#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
 
    int t; cin>>t;
    while(t--)
    {
        int n,one,two; cin>>n>>one>>two;
        int cnt1 = n/2, cnt2= n%2;
        cout<<  min(cnt1*two, cnt1*2*one) + (cnt2*one) <<"\n";
    }
 
    return 0;
}




/*
problem link: https://codeforces.com/problemset/problem/1955/A
details: week-11, problem-D (yougurt sale)
*/
