// Anik Barua 25.10.2022
#include <bits/stdc++.h>
using namespace std;
#define dhruto                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
int primes[17] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31};
#define size1 10000000

#define rep(i, a, b) for (int i = (int)a; i < (int)b; i++)
int bin_expo(int base, unsigned long long int power, int mod)
{
    base = base;
    int result = 1;
    while (power > 0)
    {
        if (power & 1 == 1)
        {
            result = result * base % mod;
        }
        base = base * base % mod;
        power >>= 1;
    }
    return result ;
}
int main()
{
    unsigned long long int power;
    cin >> power;
    cout << bin_expo(5, power, 100);
}