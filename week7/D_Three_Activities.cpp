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
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int d;
        cin>>d ;
        int first = -1,f_id= 0  , second  = 0 , third =  0 ;
        rep(i,0,d){
            int t;cin>>t ;
            if(first<t) {
                first = t;
                f_id = i ;
            }
        }
        
    }
    return 0;
}