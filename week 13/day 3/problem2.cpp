#include <bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
 
int main()
{
    fastio();
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin>>v[i];
        }
 
        if( is_sorted(v.begin(), v.end()) )
        {
            cout<< "YES\n";
            continue;
        }
        else
        {
            int x;
            for(int i=0; i<n-1; i++)
            {
                if( v[i] > v[i+1] ){
                    x=i;
                    break;
                }
            }
            bool ok = true;
            if(v[0]>=v[n-1])
            {
                for( int i=x+1; i<n-1; i++)
                {
                    if( v[i] > v[i+1] )
                    {
                        ok = false;
                        break;
                    }
                }
                if(ok) cout<<"YES\n";
                else cout<<"NO\n";
            }
            else
            {
                cout<<"NO\n";
            }
        }
    }
 
    return 0;
}




/*
link : https://codeforces.com/problemset/problem/1975/A
week-13, problem - K - Bazoka and Mocha's Array
*/