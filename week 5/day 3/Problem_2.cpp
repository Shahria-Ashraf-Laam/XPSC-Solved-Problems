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
        int n,m; cin>>n>>m;
        if( (n%2==0)&&(m%2==1) || (m<n) )  //(n-even and m-odd) or (m<n) jekono ekta condition true hole "NO" sequence pawa jabena
        {
            cout<<"NO\n";
        }
        else if(n%2==1)             //n-odd hole
        {
            cout<<"YES\n";
            for(int i=1; i<n; i++)
            {
                cout<< 1 <<" ";
            }
            cout<< m-(n-1) <<"\n";
        }
        else                     //n-even, m-even ekhane. Karon n-even and m-odd hole 1st condition kei trigger korto
        {
            cout<<"YES\n";
            for(int i=1; i<n-1; i++)
            {
                cout<< 1 <<" ";
            }
            cout<< (m-(n-2))/2 <<" "<< (m-(n-2))/2 <<"\n";
        }
    }

    return 0;
}




/*
problem link: https://codeforces.com/problemset/problem/1726/B
problem details: week-5, topicwise-6
*/