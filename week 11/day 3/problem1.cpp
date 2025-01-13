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
        int n; string s;
        cin>>n>>s;

        int ans=0, count=0;
        for(int i=0; i<n; i++)
        {
            if( s[i]=='.')
            {
                count++, ans++;
            }
            else
            {
                count=0;
            }

            if(count>=3) break;
        }

        if(count>=3) cout<< 2 <<'\n';
        else cout<< ans <<'\n';
    }


    return 0;
}


/*
link: https://codeforces.com/problemset/problem/1900/A
details: week-11, problem-B(Cover in Water)
*/
