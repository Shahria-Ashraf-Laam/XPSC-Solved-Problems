#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string s;
    cin >> s;
    map<char, int> freq;
    for (char c : s){
        freq[c]++;
    }


    int oddCount = 0;
    char oddChar = 0;
    for (auto &[ch, count] : freq)
    {
        if(count % 2 != 0)
        {
            oddCount++;
            oddChar = ch;
        }
    }

    if(oddCount > 1) {
        cout <<"NO SOLUTION\n";
        return 0;
    }

    string half = "", middle = "";
    for (auto &[ch, count] : freq)
    {
        string part(count / 2, ch);
        half += part;
        if (count % 2 != 0)
        {
            middle = ch;
        }
    }

    string result = half + middle + string(half.rbegin(), half.rend());
    cout << result << endl;

    return 0;
}



/*
problem link: https://cses.fi/problemset/task/1755/
details: week-10, random-1
*/
