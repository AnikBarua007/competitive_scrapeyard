// Anik Barua 15.11.2023
#include <bits/stdc++.h>
using namespace std;
#define dhruto                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define ep 1e-7
#define size1 10000000
#define rep(i, a, b) for (int i = (int)a; i < (int)b; i++)
// vector of pairs fuck
long long int last_digs(int base, int power, int mod)
{
    base %= mod;
    long long int result = 1;
    while (power > 0)
    {
        if (power % 2 == 1)
        {
            result = result * base % mod;
        }
        base = base * base % mod;
        power /= 2;
    }
    return result;
}
int first_dig(int base, int power)
{
    double log_res = log10(base) * power;
    log_res = log_res - (int)log_res;
    int last = pow(10, log_res) * 100;
    return last;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        printf("%d...%03d\n", first_dig(a, b), last_digs(a, b, 1000));
    }
}