// Anik Barua .. 15.12.2023
#include <bits/stdc++.h>
using namespace std;
#define dhruto                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
const int ep = 1e-7;
const int size = 1e7 + 9;
#define ll long long int
#define rep(i, a, b) for (int i = (int)a; i < (int)b; i++)
#define repll(i, a, b) for ((long long int)i = (long long int)a; i < (long long int)b; i++)
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        char a[3][3];
        rep(i,0,3){
            rep(j,0,3){
                cin>>a[i][j];
            }
        }
        rep(i, 0, 3)
        {
            rep(j, 0, 3)
            {
                //cin >> a[i][j];
                if (a[i][j] == '?')
                {
                    int marka =-1 ,markb =-1 ,markc= -1 ; 
                    rep(k,0,3){
                        if(a[i][k]=='A')marka=1;
                        if(a[i][k]=='B')markb=1;
                        if(a[i][k]=='C')markc=1;
                    }
                    if(marka==-1)cout<<'A'<<endl;
                    if(markb==-1)cout<<'B'<<endl;
                    if(markc==-1)cout<<'C'<<endl;
                }
            }
        }
    }
    return 0;
}
