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
        int n,k; cin>>n>>k;
        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin>>v[i];
        }

        vector<int> result;                    //ekhane push korbo v[i]%k==0 jei value segular index, amader index e dorkar
        vector<pair<int,int>> notequalzero;   //ekhane push korbo v[i]%k != 0 jei value, segular value + index, tai pair newa
        for(int i=0; i<n; i++)
        {
            if(v[i]%k==0){
                result.push_back(i+1);
            }
            else{
                notequalzero.push_back({v[i]%k, i+1});
            }
        }

        sort( all(notequalzero),[&](pair<int,int> x, pair<int,int> y)  
            {                                                         //eta ekta custom sort function
                if(x.first == y.first){
                    return x.second<y.second;
                }
 
                return x.first>y.first;  //1st value in descending order, 2nd value in ascending order jodi x & y er 1st value same hoy 
            }
        );


        for(int i=0; i<result.size(); i++){
            cout<< result[i] <<" ";            //lastly, first e result er element gulo print korbo as ekhane index e ase shudhu
        }
        for(int i=0; i<notequalzero.size(); i++){
            cout<< notequalzero[i].second <<" ";   //erpor notequalzero er pair er 2nd value print korbo as 2nd value is the index   
        }
        cout<<'\n';
    }

    
    return 0;
}



/*
problem link: https://codeforces.com/problemset/problem/1849/B
problem details: week-12, problem- K - Monsters
*/