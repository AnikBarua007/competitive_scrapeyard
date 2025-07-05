// Anik Barua .. 15.12.2023
#include <bits/stdc++.h>
using namespace std;
#define dhruto                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
// const int ep = 1e-7;
// // const int total = 1e7 + 9;
// #define ll long long int
#define rep(i, a, b) for (int i = (int)a; i < (int)b; i++)
const int total = 1e6+ 9;
int a, b, k, cs[total];
bool primes[total] = {0};
void sieve()
{
    memset(primes, true, sizeof(primes));
    primes[0] = primes[1] = false;
    for (int i = 2; i * i < total; i++)
    {
        if (primes[i])
        {
            for (int j = i * i; j < total; j += i)
            {
                primes[j] = false;
            }
        }
    }
    cs[0] = 0;
    for (int i = 1; i < total; i++)
    {
        cs[i] = cs[i - 1] + primes[i - 1];
    }
}
bool possible(int mid)
{
    for (int i = a; i <= b - mid + 1; i++)
        if (cs[i + mid] - cs[i] < k)
            return false;
    return true;
}
int main()
{
    sieve();
    scanf("%d %d %d", &a, &b, &k);
    int low = 1;
    int high = b - a + 1, mid, result = -1;
    while (low <= high)
    {
        mid = (high + low) >> 1;
        // mid = low + (high  - low ) / 2 ;
        // mid = low + ;
        if (possible(mid))
        {
            high = mid - 1;
            result = mid;
        }
        else
            low = mid + 1;
    }
    cout << result << endl;
    return 0;
}