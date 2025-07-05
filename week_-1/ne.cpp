#include <bits/stdc++.h>
using namespace std;

const int MAX_SIZE = 2e5 + 1;

#define dhruvo                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

#define ll long long int
#define endl '\n'
#define rep(i, a, b) for (int i = (int)a; i < (int)b; i++)
#define repll(i, a, b) for (long long i = (long long)a; i < (long long)b; i++)

#define ull unsigned long long
#define khatam_ta_ta_bye_bye return 0;
#define PI 3.1416

bool primes[MAX_SIZE];
vector<int> prime;
vector<pair<int, int>> twinPrimes;

void sieve()
{
    for (int i = 4; i <= MAX_SIZE; i += 2)
    {
        primes[i] = true;
    }

    for (int i = 3; i * i <= MAX_SIZE; i += 2)
    {
        if (primes[i] == false)
        {
            for (int j = i * i; j <= MAX_SIZE; j += i)
            {
                primes[j] = true;
            }
        }
    }

    for (int i = 2; i <= MAX_SIZE; i++)
    {
        if (primes[i] == false)
        {
            prime.push_back(i);
        }
    }

    for (int i = 0; i < prime.size() - 1; i++)
    {
        if (prime[i + 1] - prime[i] == 2)
        {
            twinPrimes.push_back(make_pair(prime[i], prime[i + 1]));
        }
    }
}

int main()
{
    sieve();
    // fast;

    int nth;
    while (cin >> nth)
    {
        nth--;
        cout << '(' << twinPrimes[nth].first << ", " << twinPrimes[nth].second << ')' << endl;
    }

    khatam_ta_ta_bye_bye
}
