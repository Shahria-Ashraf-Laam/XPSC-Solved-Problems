#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n; cin>>n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int maximal = 0, result = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] == 0) {
            maximal = 0; 
        } else {
            maximal++;
            result = max(result, maximal); 
        }
    }

    
    if (v[0] != 0 && v[n - 1] != 0) {
        int start = 0, end = 0;
       
        while (start < n && v[start] != 0) {
            start++;
        }

        while (end < n && v[n - 1 - end] != 0) {
            end++;
        }

        result = max(result, start + end);
    }

    cout << result << '\n';
    return 0;
}



/*
link: https://codeforces.com/problemset/problem/1141/B
details: week-11, problem-I(Maximal Continuous Rest)
*/
