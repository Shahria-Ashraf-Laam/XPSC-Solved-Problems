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
    fastio();
    int n,q; cin>>n>>q;
    vector<int> v(n);   //Main array
    for(int i=0; i<n; i++) cin>>v[i];

    vector<int> diff(n+1,0);  //Difference Array, Jodio vector e initially shob index e 0 thake, tao amra 0 diye nilam
    while(q--)
    {
        int l,r; cin>>l>>r;
        l--, r--;  //question e 1-based indexing kora, but amra kortesi 0-based index e. Tai r & l ekbar komano holo
        diff[l]++;
        diff[r+1]--;
    }

    for(int i=1; i<=n; i++)
    {
        diff[i] = diff[i] + diff[i-1];
    }

    sort(v.rbegin(), v.rend());
    sort(diff.rbegin(), diff.rend());
    ll ans = 0;
    for(int i=0; i<n; i++)
    {
        ans += (1LL * v[i] * diff[i]);  //1LL gun korlam jeno runtime error/ overflow na hoy. Staying in safe side!
    }
    cout<< ans <<endl;


    return 0;
}



/*
week-14, topicwise problem - A - Little Girl and Maximum Sum
link:  https://codeforces.com/problemset/problem/276/C
*/
