// Anik Barua 28.11.2023
#include <bits/stdc++.h>
using namespace std;
#define dhruto                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
const int ep = 1e7;
#define size1 1000010
#define ll long long int
#define rep(i, a, b) for (int i = (int)a; i < (int)b; i++)
ll mod = 1000000007;
const ll size = 1e6 + 100;
ll fact[10000007];
ll bin_expo_mod(ll base, ll power)
{
    ll result = 1ll;
    base %= mod;
    while (power > 0)
    {
        if (base & 1)
        {
            result = (result * base) % mod;
        }
        base = base * base % mod;
        power >>= 1;
       
    }
     return result%mod ;
}
void pre_calculation()
{
    ll ans = 1ll;
    fact[0] = 1ll;
    for (int i = 1; i <= size; i++)
    {
        ans = (ans * i) % mod;
        fact[i] = ans;
    }
}
bool good_number(ll sum, ll a, ll b)
{
    // bool f = true;
    while (sum > 0)
    {
        if (!(sum % 10 == a || sum % 10 == b))
            return false;
        sum /= 10;
    }
    return true;
}
ll get_c(ll n, ll i)
{
    ll res = fact[n] %mod;
    ll div = (fact[n - i] * fact[i])%mod;
    div = bin_expo_mod(div, mod - 2);
    return (res * div) % mod;
}
int main()
{
pre_calculation();
    ll a, b, n;
    cin >> a >> b >> n;
    
    ll ans = 0ll;
    for (ll i = 0; i <= n; i++)
    {
        ll sum = a * i + (b * (n - i));
        if (good_number(sum, a, b))
        {
            ans += get_c(n, i);
            ans =ans%mod;
        }
    }
    cout << ans << endl;
    return 0;
}