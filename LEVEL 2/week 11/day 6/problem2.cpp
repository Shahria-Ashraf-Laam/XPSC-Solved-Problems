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
   fastio()
   string t, p; cin>>t>>p;
   int n = t.size(), m = p.size();
   vector<int> a(n);
   for (int i = 0;i < n;i++)
   {
      cin >> a[i];
      a[i]--;
   }

   bool found = false;
   auto ok = [&](int del)
   {
      vector<bool> bad(n);
      for (int i = 0;i <= del;i++)
      {
         bad[a[i]] = true;
      }

      int j = 0;
      for (int i = 0;i < n;i++)
      {
         if (!bad[i] && t[i] == p[j])
         {
            j++;
         }
         if (j == m)
         {
            found = true;
            return true;
         }
      }

      return false;
   };


   int l = 0, r = n - 1, mid, ans = 0;
   while (l <= r)
   {
      mid = l + (r - l) / 2;
      if (ok(mid))
      {
         ans = mid;
         l = mid + 1;
      }
      else
      {
         r = mid - 1;
      }
   }
   cout << (found ? ans + 1 : ans) << '\n';


   return 0;
}


/*
week-11, topic problem - A - EDU(problem 1) String Game
link: https://codeforces.com/edu/course/2/lesson/6/2/practice/contest/283932/problem/F
*/