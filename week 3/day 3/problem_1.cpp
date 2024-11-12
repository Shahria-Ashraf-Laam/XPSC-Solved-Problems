#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--)
    {
        string s1,s2; cin>>s1>>s2;
        char s1Last = s1.back();
        char s2Last = s2[s2.size()-1];  //dui bhabei last character access kora jay
        int s1Size = s1.size()-1;
        int s2Size = s2.size()-1;

        if( s1Last == s2Last )
        {
            if( s1Size==s2Size )
            {
                cout<< "=\n";
            }
            else if( s1Last == 'S' )
            {
                (s1Size>s2Size) ? cout<<"<\n":cout<<">\n";  //S er aage X joto beshi seta toto choto
            }
            else
            {
                (s1Size>s2Size) ? cout<<">\n":cout<<"<\n";
            }
        }
        else
        {
            if( s1Last == 'S' ) cout<< "<\n";
            if( s1Last == 'L' ) cout<<">\n";
            if( s1Last == 'M' )
            {
                (s2Last=='L') ? cout<<"<\n":cout<<">\n";
            }
        }
    }


    return 0;
}

/*
problem link- https://codeforces.com/problemset/problem/1741/A
problem sheet: week-3, random-G(Compare T-Shirt Sizes)
*/
