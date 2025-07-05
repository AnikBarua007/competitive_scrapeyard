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
    ll m, n;
    cin >> m >> n;
    map<string, ll> ma;
    rep(i , 0  , m )
    {
        string w;
        ll v;
        cin >> w >> v;
        ma[w] = v;
    }
    rep(i ,  0 , n)
    {
        string w;
        ll price = 0;
        while (cin >> w && w != ".")
            price += ma[w];
        cout << price << endl;
    }
    return 0;
}