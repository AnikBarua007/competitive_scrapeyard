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
    //vector<ll> v(n);
    ll  v[n];
    rep(i, 0, n)
    {
        cin >> v[i];
    }
    vector<ll> prefix;
    prefix.push_back(0);
    for (ll i = n - 1; i >= 0; i--)
    {
        ll val = v[i] + prefix.back();
        prefix.push_back(val);
    }
    // cout<< v[2];
    int t;
    cin >> t;
    while (t--)
    {
        ll a;
        cin >> a;
        if (a == 1)
        {
            ll b, c;
            cin >> b >> c;
            b = n - b + 1;
            c = n - c;
            cout << (prefix[b] - prefix[c]) << endl;
        }
        else 
        {
            ll b;
            cin >> b;
            b += prefix.back();
            n++;
            prefix.push_back(b);
        }
    }
    return 0;
}