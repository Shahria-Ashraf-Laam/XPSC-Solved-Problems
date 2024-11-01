#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    unordered_map<string, int> mp;
    vector<string> vec(n);

    for (int i = 0; i < n; ++i) {
        cin >> vec[i];
        mp[vec[i]] = i;
    }

    vector<pair<int, string>> vec1;
    for (auto &it : mp) {
        vec1.push_back({it.second, it.first});
    }

    sort(vec1.rbegin(), vec1.rend());

    for (auto &it : vec1) {
        cout << it.second << '\n';
    }


    return 0;
}

/*
problem link- https://codeforces.com/problemset/problem/637/B
problem sheet: week-1, topicwise-9(chat order)
*/
