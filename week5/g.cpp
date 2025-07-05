#include <bits/stdc++.h>
using namespace std;
#define dhruto                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
const int n = 1e6+10;
// bool primes[n];
vector<bool>primes(n,true);
vector<bool>prime_prefix(n,false);
vector<int>cal_prime_prefix(n);
void sieve()
{
    primes[1] = false;
    primes[0] = false;
    for (int i = 4; i <= n; i += 2)
    {
        primes[i] = false;
    }
    for (int i = 3; i * i <= n; i += 2)
    {
        if (primes[i] == true)
        {
            for (int j = i * i; j < n; j += i)
            {
                primes[j] = false;
            }
        }
    }
    for (int i = 2; i <n; i++)
    {
        if (primes[i] == true)
        {
            int num = i;
            int dig_sum = 0;
            while (num > 0)
            {
                dig_sum += num % 10;
                num /= 10;
            }
            if (primes[dig_sum] == true)
            {
                prime_prefix[i] = true;
            }
        }
    }
    int c = 0;
    for (int i = 0; i <= n; i++)
    {
        if (prime_prefix[i] == true)
        {
            cal_prime_prefix[i] = ++c;
            
        }else
        cal_prime_prefix[i] = c;
    }
}
int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    sieve();
    
    int t; int l, r;
    cin >> t;
    while (t--)
    {
        scanf("%d %d", &l, &r);
        if (l == 0)
            printf("%d\n",cal_prime_prefix[r]);

        else
            printf("%d\n", cal_prime_prefix[r] - cal_prime_prefix[l - 1]);
    }
    return 0;
}