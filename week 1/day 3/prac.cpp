#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--)
    {
        int game, won; cin>>game>>won;
        int lose = game-won;
        if(game==won)
        {
            int jitbe = 0;
            for(int i=1; i<=won; i++)
            {
                jitbe += pow(2,i);
            }
            cout<< jitbe <<"\n";
        }
        else
        {
            int pabe = 0;
            int dibe = 0;
            for(int i=1; i<=lose; i++)
            {
                dibe += pow(2,i);
            }
            for(int i=game; i>=lose+1; i--)
            {
                pabe += pow(2,i);
            }

            cout<< pabe-dibe <<"\n";
        }

    }

  return 0;
}
