#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int A,B; cin>>A>>B;
    if(A>B) cout<<0<<"\n";
    else cout<<(B-A)+1<<"\n";

  return 0;
}

/*
problem link- https://atcoder.jp/contests/abc209/tasks/abc209_a?lang=en
problem sheet: week-1, random-A(Counting)
*/