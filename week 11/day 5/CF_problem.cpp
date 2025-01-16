#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

    int t; cin >> t;
    while (t--) 
    {
        int n,a,b; cin >>n>>a>>b;
        if ((a ^ b) & 1) cout << "NO\n";
        else cout << "YES\n";
    }

    return 0;
}

/*
link : https://codeforces.com/contest/2055/problem/A
*/