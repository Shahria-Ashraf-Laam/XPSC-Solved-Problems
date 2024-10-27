#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin>>n;
    deque<int> dq(n);
    for( int i=0; i<n; i++ )
    {
        cin >> dq[i];
    }

    int sereja=0, dima=0, turn=1; 
    while( !dq.empty() )
    {
        int left = dq.front(), right = dq.back(), mx;
        mx = max(left,right);

        if( turn%2 == 1 )
        {
            sereja += mx;
        }
        else
        {
            dima += mx;
        }

        if( mx==left ) dq.pop_front();
        else dq.pop_back();

        turn++;
    }

    cout<< sereja <<" "<< dima <<"\n";

  return 0;
}


/*
problem link - https://codeforces.com/contest/381/problem/A
problem sheet:  week-1, topicwise-1
*/