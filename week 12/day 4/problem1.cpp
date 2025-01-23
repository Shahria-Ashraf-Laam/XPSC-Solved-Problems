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
        vector<int> a(n), b(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        for(int i=0; i<n; i++){
            cin>>b[i];
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());

        bool result = true;
        for(int i=0; i<n; i++)
        {
            if( a[i] != b[i]  &&  a[i]+1 != b[i] ){
                result = false;
                break;
            }
        }

        if(result) cout<<"YES\n";
        else cout<<"NO\n";
    }

    return 0;
}



/*
link : https://codeforces.com/problemset/problem/1584/C
week-12, problem- G - Two Arrays
*/