// Anik Barua .. 15.12.2023
#include <bits/stdc++.h>
using namespace std;
#define dhruto                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
const int ep = 1e-7;
const int size = 1e7 + 9;
#define ll long long int
#define endl '\n'
#define rep(i, a, b) for (int i = (int)a; i < (int)b; i++)
#define repll(i, a, b) for ((long long int)i = (long long int)a; i < (long long int)b; i++)
ll  solve(int test){
    if(test == 1 )return 0;
    ll result= 1;
    // rep(i, 2, (i*i)+1)
    for(int  i = 2 ; i*i<=test;i++){
       if(test%i==0){
        result+=i;
        if(test/i!=i){
            result += test/i ;
        }
       } 
    }
    return result;
}
int main()
{
    dhruto;
    int t;
    cin >> t;
    while (t--)
    {
        int test  ; 
        cin>> test ; 
        cout<<solve(test)<<endl;
    }
    return 0;
}
