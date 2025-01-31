#include<bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
#define ll int64_t
#define all(v) v.begin(), v.end()
#define yes cout<< "YES" <<endl
#define no cout<< "NO" <<endl
#define endl "\n"


int main()
{
    fastio()
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        set<int> st;
        for(int i=0; i<n; i++)
        {
            int x; cin>>x;
            st.insert(x);
        }

        int unique = st.size();
        if(unique==n)
        {
            for(int i=1; i<=n; i++){
                cout<< unique <<" ";
            }
            cout<<endl;
        }
        else
        {
            for(int i=1; i<=unique; i++){
                cout<< unique <<" ";
            }
            for(int i=1; i<= n-unique; i++){  //unique element hoy n shoman othoba choto hobe, n theke boro hobena!
                cout<< unique+i <<" ";
            }
            cout<<endl;
        }   
    }

    return 0;
}



/*
link:  https://codeforces.com/problemset/problem/1642/B
week-13, problem - H - Power Walking
*/