#include <bits/stdc++.h>
using namespace std;

int fibo(vector<int>& v) {
    int count = 0;
    for (int i = 2; i < 5; i++) {
        if (v[i] == v[i - 1] + v[i - 2]) {
            count++;
        }
    }
    return count;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t; cin >> t;
    while (t--) 
    {
        vector<int> v(5);
        for (int i = 0; i < 5; i++) {
            if (i != 2) cin >> v[i];
        }

        int maxfibo = 0;
        for (int a3=-200; a3<=200; a3++) 
        {
            v[2] = a3;
            maxfibo = max(maxfibo, fibo(v));
        }
        cout << maxfibo << '\n';
    }

    return 0;
}



/*
link : https://codeforces.com/contest/2060/problem/A
*/