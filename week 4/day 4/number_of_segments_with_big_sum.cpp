#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    long long k; 
    cin>>n>>k;
    vector<int> v(n);
    for( int i=0; i<n; i++ ){
        cin>>v[i];
    }

    int l=0,r=0;
    ll sum=0,ans=0;
    while(r<n)
    {
        sum+=v[r];
        if( sum < k )
        {
            r++;
        }
        else
        {
            while(sum>=k) // l<=r condition ta na kono shomossha hoy na, but to be in safe side dewa hoise
            {
                ans += n-r;  //(n-1-r)+1  ->  n-1-r+1  ->  n-1    bekkha niche!
                sum-=v[l];
                l++;
            }
            r++;
        }

    }

    cout<< ans <<"\n";

  return 0;
}

/*
problem link- https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/D
problem sheet: week-4, Topicwise-4(Number of Segments with Big Sum)
*/

/*
(n-1-r)+1  ->  n-1-r+1  ->  n-1   er  bekkha
2 6 4 3 6 8 9 ekhane r=4 index tokhon sum>=k contion trigger kore.
amra kintu l=0 && r=4 er majhe ektai subarray pai. r=4 er pore element baki thake aro duita, ei duita element o jokhon 
add korbo tokhon o nishchoi sum>=k true hobe!
l=0 theke r=4 porjonto 1 ta
l=0 theke r=5 porjonto 1 ta 
l=0 theke r=6 porjonto 1 ta, total 3 ta subarray pwa possible ekhane!
tar mane condition trigger korle pabo 1 ta subarr ar baki jotogula element thake shei koyta subarray o pawa jabe.
tai (n-1-r) korsi first e karon n to size, n-1 korle ami index ta pabo. n-1 theke r minus korle pabo baki koyta element ase!
(n-1-r) theke pai 2 and last e 1 plus kori karon l=0 & r=4 er moddhe j amra ekta subarray pai setar jonno
mane ekhane 2+1=3 hoy.
evabei iteration gulo hobe
*/