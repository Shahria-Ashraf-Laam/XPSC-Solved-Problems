#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--)
    {
        int n; string s;
        cin>>n>>s;
        int i=0, j=n-1;
        while(i<j)
        {
            if(s[i]==s[j])
            {
                break;
            }
            else
            {
                i++, j--;
            }
        }

        cout<< (j-i)+1 <<"\n";
    }

    return 0;
}

/*
problem link- 
problem sheet: week-3, Topicwise-(prepend and append)
*/
