#include <stdio.h>
#include <string.h>
typedef long long ll;
bool ar[3000004];
void sieve(ll n)
{
    memset(ar, false, sizeof(ar));
    ll i, j;
    ar[0] = false;
    ar[1] = false;
    for (i = 4; i <= n; i = i + 2)
        ar[i] = true;
    for (i = 3; i * i <= n; i = i + 2)
    {
        if (!ar[i])
        {
            for (j = i * i; j <= n; j = j + i + i)
            {
                ar[j] = true;
            }
        }
    }
    for (i = 4; i <= n; i++)
    {
        if (ar[i])
        {
            for (j = 2 * i; j <= n; j = j + i)
                ar[j] = false;
        }
    }
}
int main()
{
    ll n, i, x;
    sieve(3000000);
    while (scanf("%lld", &n) != EOF)
    {
        ll count = 0;
        for (i = 0; i < n; i++)
        {
            scanf("%lld", &x);
            if (ar[x])
                count++;
        }
        printf("%lld\n", count);
    }
    return 0;
}