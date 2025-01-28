#include <bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

int main() {
    fastio()
    int t;
    cin >> t;
    while (t--) {
        int a1, b1, a2, b2;
        cin >> a1 >> b1 >> a2 >> b2;  //1st rectangle - a1,b1 & 2nd rectangle - a2,b2
        
        if(a1==a2 && b1+b2==a1) yes;
        else if(a1==b2 && b1+a2==a1) yes;
        else if(b1==a2 && a1+b2==b1) yes;
        else if(b1==b2 && a1+a2==b1) yes;
        else no;
    }
    return 0;
}



/*
link : https://codeforces.com/problemset/problem/1351/B
week-13, problem - E - Square?
*/