#include <bits/stdc++.h>
using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   cout.tie(nullptr);

   int n, q; cin>>n>>q;
   vector<int> v(n);
   for (int i = 0;i < n;i++)
   {
        cin >> v[i];
   }

   for (int i = 0;i < q;i++) 
   {
        int key, l=0, r=n-1, mid; cin>>key;
        bool found = false;
        while (l <= r) 
        {
            mid = (l + r) / 2;
            if (key == v[mid]) 
            {
                found = true;
                break;
            }
            else if (key < v[mid])
            {
                r = mid - 1;
            }
            else 
            {
                l = mid + 1;
            }
        }

        if(found) cout<<"YES"<<'\n';
        else cout<<"NO"<<'\n';
        
   }
   return 0;
}


/*
problem link: 
details: week-10, topicwise-1
*/
