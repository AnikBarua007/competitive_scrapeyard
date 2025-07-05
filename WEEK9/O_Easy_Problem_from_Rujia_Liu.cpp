// Anik Barua .. 15.12.2023
#include <bits/stdc++.h>
using namespace std;
#define dhruto                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
// const int ep = 1e-7;
const int sz = 1e6+  10 ;
#define rep(i, a, b) for (int i = (int)a; i < (int)b; i++)
#define repll(i, a, b) for ((long long int)i = (long long int)a; i < (long long int)b; i++)
// #define ll long long int
// #define endl '\n'
// #define pb push_back

int main()
{
    dhruto;
    int v , e ;
    while (cin>>v>>e)
    {
        vector<vector<int>>ma(sz);
        rep(i,0,v){
            int test ;
            cin>>test;
            ma[test].push_back(i+1);
        }
        while(e--){
            int a, b;
            cin>>a>>b;
            if(a>ma[b].size()){
                cout<<'0'<<endl;
            }
            else {
                cout<<ma[b][a-1]<<endl;
            }
        }
    }
    return 0;
}
