#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m; cin>>n>>m;
    vector<int> arr1(n), arr2(m);
    for(int i=0; i<n; i++)
    {
        cin>> arr1[i];
    }
    for(int i=0; i<m; i++)
    {
        cin>> arr2[i];
    }

    int up=0, down=0, cnt=0;  //up hocche uporer array er pointer, down nicher array er
    while(down<m)
    {
        if( up<n && arr1[up]<arr2[down] )
        {
            cnt++, up++;
        }
        else
        {
            down++;
            cout<< cnt <<" ";
        }
    }

    return 0;
}

/*
problem link-
problem sheet: week-3, Topicwise-G(number of smaller)
*/
