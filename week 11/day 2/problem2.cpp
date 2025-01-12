#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n; cin>>n;
    int v[n];
    for(int i=0; i<n; i++){
        cin>>v[i];
    }

    int idx = -1, val = INT_MAX;
    for(int i=0; i<n; i++)
    {
        if(v[i] < val)
        {
            val = v[i];
            idx = i+1;
        }
    }
    cout<< val <<" "<< idx <<"\n";

    return 0;
}

