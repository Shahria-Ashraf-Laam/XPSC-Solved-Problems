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
        int n; cin>>n;
        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin>>v[i];
        }
        sort(v.begin(), v.end());

        bool ok = true;
        for(int i=n-1; i>0; i--)
        {
            if( v[i]-v[i-1] > 1){
                ok = false;
                break;
            }
        }

        if(ok) cout<<"YES\n";
        else cout<<"NO\n";
    }

    return 0;
}




/*
problem link: https://codeforces.com/problemset/problem/1399/A
*/