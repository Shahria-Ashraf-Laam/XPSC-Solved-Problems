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
    for(int i=1; i<=n; i++)
    {
        for(int m=1; m<=2; m++)
        {
            for(int j=1; j<=n; j++)
            {
                if(i%2==0){
                    if(j%2==0) cout<<"##";
                    else cout<<"..";
                }
                else{
                    if(j%2==0) cout<<"..";
                    else cout<<"##";
                }
            }
            cout<<endl;
        }
    }


    } //while loop of test cases end here!


    return 0;
}



/*
link: https://codeforces.com/problemset/problem/1950/B
week-13, problem - L - Upscaling
*/
