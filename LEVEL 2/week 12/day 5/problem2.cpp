#include<bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
#define ll int64_t
#define all(v) v.begin(), v.end()
#define yes cout<< "YES" <<endl
#define no cout<< "NO" <<endl
#define endl "\n"

ll next_prime( ll x )
{
    int flag;
    while(1)
    {
        flag = 1;
        for(ll i=2; i*i <= x; i++)  //this loop checks a number is prime or not
        {
            if(x%i==0)
            {
                flag=0;
                break;
            }
        }

        if(flag==0)
        {
            x++;
        }
        else
        {
            return x;
        }
    }
}

int main()
{
    fastio();
    int t; cin>>t;
    while(t--)
    {
        ll d; cin>>d;
        ll val1 = next_prime(1+d);
        ll val2 = next_prime(val1+d);
        cout<< val1*val2 <<endl;
    }

    return 0;
}




/*
link: https://codeforces.com/problemset/problem/1474/B
week-12, topicwise problem - G - Different Divisors
*/