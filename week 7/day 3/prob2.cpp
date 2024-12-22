#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        ll km;
        cin >> km;
        vector<int> v(3);
        for (int i = 0; i < 3; i++) cin >> v[i];

        ll cycle_sum = v[0] + v[1] + v[2];
        ll countday = 0;

        //Full cycle hishab
        if(km >= cycle_sum)
		{
            ll full_cycles = km / cycle_sum;
            countday += 3 * full_cycles;
            km -= full_cycles * cycle_sum;
        }

        //Baki distane handle korar jonno
        for(int i = 0; i < 3 && km > 0; i++)
		{
            km -= v[i];
            countday++;
        }

        cout << countday << "\n";
    }

    return 0;
}









/*
problem link: https://codeforces.com/contest/2051/problem/B
*/