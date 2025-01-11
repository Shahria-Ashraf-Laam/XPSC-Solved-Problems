#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

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
problem link: https://codeforces.com/problemset/problem/1975/A
details: week-11, problem-A(Bazoka and Mocha's Array)
*/
