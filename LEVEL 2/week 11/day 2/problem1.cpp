#include<bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
#define ll int64_t
#define all(v) v.begin(), v.end()
#define yes cout<< "YES" <<endl
#define no cout<< "NO" <<endl
#define endl "\n"

void solve()
{
    int n,k; cin>>n>>k;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }

    int count = 0, num = 1;
    for(int i=0; i<n; i++)
    {
        if(v[i]==num){
            num++;
        }else{
            count++;     //er maddhome amra janbo koyta number serial moto nai
        }               //1,4,3,2 ekhane serial moto ase khali 1 ar 2, baki 2 ta number serail onujayi nai!
    }

    cout<< (count+k-1)/k  <<'\n';   //count+(k-1) korar karon amra count/k er ceil value ta nite chai!
}

int main()
{
    fastio()
    int t; cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}


/*
link : https://codeforces.com/problemset/problem/1768/B
week-11, random problem - C - Quick Sort
*/