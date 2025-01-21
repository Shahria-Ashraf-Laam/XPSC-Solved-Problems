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
        int s1,s2; cin>>s1>>s2;
        string st1,st2; cin>>st1>>st2;

        int diff = s1-s2+1, result = INT_MAX;
        for(int i=0; i<diff; i++)
        {
            int count = 0;
            for(int j=0; j<s2; j++)
            {
                if( st2[j] != st1[j+i] ) count++;
            }
            result = min(result,count);
        }
        cout<< result <<'\n';
    }

    return 0;
}