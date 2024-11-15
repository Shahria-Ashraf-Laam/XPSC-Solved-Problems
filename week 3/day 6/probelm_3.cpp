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

    int up=0, down=0;
    long long ans=0;       // cnt1 and cnt2 gunn hobe tai ans long long type newa 
    //up hocche uporer array er pointer, down nicher array er. Module e up=l & down=r
    //module e arr1=a & arr2=b
    while(up<n && down<m)
    {
        int current = arr1[up], cnt1=0, cnt2=0;
        while(up<n && arr1[up]==current)
        {
            up++, cnt1++;
        }

        while( down<m && current>arr2[down] )
        {
            down++;
        }

        while(down<m && arr2[down]==current)
        {
            down++, cnt2++;
        }

        ans += (1LL*cnt1*cnt2);  //eta ke inline typecasting bole

    //cnt1 & cnt2 to integer type, tai int theke boro value rakhte gele overflow hobe.Tai 1LL gunn kora
    //holo jeno pura type ta long long hoye jay.Eta na kore amra chaile cnt1 & cnt2 ke long long type e
    //declare korte partam
    }

    cout<< ans <<"\n";

    return 0;
}

/*
problem link- https://codeforces.com/edu/course/2/lesson/9/1/practice/contest/307092/problem/C
problem sheet: week-3, Topicwise-3(number of equal)
*/
