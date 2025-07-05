// Anik Barua .. 15.12.2023
#include <bits/stdc++.h>
using namespace std;
const int sz = 1e5 + 1;
#define dhruto                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
const int ep = 1e-7;
const int size = 1e7 + 9;
#define ll long long int
#define endl '\n'
#define rep(i, a, b) for (int i = (int)a; i < (int)b; i++)
#define repll(i, a, b) for ((long long int)i = (long long int)a; i < (long long int)b; i++)
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    rep(i, 0, n)
    {
        cin >> v[i];
    }
    rep(i , 1 , n){
        v[i]+=v[i-1];
    }
    
    int t;
    cin >> t;
    while (t--)
    {
        int a;
        cin >> a;
        if (a == 1)
        {
            int b ,c ; 
            cin>> b >> c ; 

        }
        else if (a == 2){
            int b ; 
            cin>> b ; 

        }
    }
    return 0;
}
