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
        vector<int> pos,neg;
        ll zero_cnt = 0, sum = 0;
        for(int i=1; i<=n; i++)
        {
            int x; cin>>x;
            sum += x;
            if( x>0 ){
                pos.push_back(x);
            }else if(x<0){
                neg.push_back(x);
            }else{
                zero_cnt++;
            }
        }

        if(sum==0) no;
        else
        {
            yes;
            if(sum>0)   // mane positive number er jogfol beshi
            {
                for(int i=0; i<pos.size(); i++){
                    cout<<pos[i]<<" ";
                }
                for(int i=0; i<neg.size(); i++){
                    cout<<neg[i]<<" ";
                }
                for(int i=0; i<zero_cnt; i++){
                    cout<< 0 <<" ";
                }
            }
            else      // mane negative number er jogfol beshi
            {
                for(int i=0; i<neg.size(); i++){
                    cout<<neg[i]<<" ";
                }
                for(int i=0; i<pos.size(); i++){
                    cout<<pos[i]<<" ";
                }
                for(int i=0; i<zero_cnt; i++){
                    cout<< 0 <<" ";
                }
            }
            cout<<"\n";
        }
    }

    
    return 0;
}

/*
link: https://codeforces.com/problemset/problem/1427/A
week-12, problem: H - Avoiding Zero
kothin mojar ekta problem!
*/