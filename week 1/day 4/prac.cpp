#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

int t; cin>>t;
while(t--)
{

    vector<int> divisor;
    int arr[2] = {0};  //arr[0] even arr[1] odd
    int n; cin>>n;
    
    for( int i=1; i<=sqrt(n); i++ )
    {
        if( n%i==0 )
        {
            divisor.push_back(i);
            if( i != n/i )
            {
                divisor.push_back(n/i);
            }
        }
    }

    for( int val: divisor)
    {
        if( val%2 == 0 ) arr[0]++;
        else arr[1]++;
    }

    if( arr[0]>arr[1] ) cout<< 1 <<"\n";
    else if( arr[0]==arr[1] ) cout<< 0 <<"\n";
    else  cout<< -1 <<"\n";

}


  return 0;
}


//code chef contest er ekta problem