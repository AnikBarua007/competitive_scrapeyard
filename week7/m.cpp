// Anik Barua 15.11.2023
#include <bits/stdc++.h>
using namespace std;
#define dhruto                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
const int ep = 1e7;
#define ll long long
#define size1 1000010
#define rep(i, a, b) for (int i = (int)a; i < (int)b; i++)
bool primes[size1];
vector<ll> prime;
void sieve()
{
    primes[0] = primes[1] = true;
    for (int i = 2; i * i <= size1; i++)
    {
        if (!primes[i])
        {
            for (int j = i * i; j <= size1; j += i)
            {
                primes[j] = true;
            }
        }
    }
    for (int i = 2; i < size1; i++)
    {
        if (!primes[i])
        {
            prime.push_back(i);
        }
    }
}
ll min_factor_prime_count(ll prime, ll count)
{
    ll number = prime;
    while (1)
    {
        ll temp = number;
        ll k = prime;
        while (k <= temp)
        {
            count -= temp / k;
            k *= prime;
        }
        if (count <= 0)
        {
            break;
        }
        number++;
    }
    return number;
}
int main()
{
    dhruto;
    sieve();
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll ans = 1;
        for (int i = 0; i < size1 && prime[i] * prime[i] <= n; i++)
        {
            ll count = 0;
            if (n % prime[i] == 0)
            {
                while (n % prime[i] == 0)
                {
                    count++;
                    n /= prime[i];
                }
                if (count)
                    ans = max(min_factor_prime_count(prime[i], count), ans);
            }
        }
        if (n > 1)
        {
            ans = max(ans, n);
        }
        cout << ans << endl;
    }

    return 0;
}