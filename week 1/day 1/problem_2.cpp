#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while( t-- )
    {
        int n; cin>>n;
        string st; cin>>st;
        
        int firstPos=-1, lastPos=-1;
        firstPos = st.find('B');
        lastPos = st.rfind('B');

        cout<< (lastPos-firstPos)+1 <<"\n";
    }

  return 0;
}


/*
problem link - https://codeforces.com/problemset/problem/1927/A
problem sheet:  week-1, topicwise-2
*/