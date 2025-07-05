// Anik Barua .. 09.02.2024
#include <bits/stdc++.h>
using namespace std;

const int MAX_SIZE = 1e5 + 1;
#define FASTIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

const int EPSILON = 1e-7;
const int ARRAY_SIZE = 1e7 + 9;
#define ll long long int
#define endl '\n'

#define MAX_PRIME_CHECK 10000000
#define rep(i, a, b) for (int i = (int)a; i < (int)b; i++)

// const int EPSILON = 1e-7;
// const int ARRAY_SIZE = 1e7 + 9;
// #define ll long long int
// #define endl '\n'

// #define MAX_PRIME_CHECK 10000000
// #define rep(i, a, b) for (int i = (int)a; i < (int)b; i++)

vector<bool> isComposite(MAX_PRIME_CHECK + 1);

void sieve()
{
    for (int i = 4; i <= MAX_PRIME_CHECK; i += 2)
    {
        isComposite[i] = true;
    }

    for (int i = 3; i * i <= MAX_PRIME_CHECK; i += 2)
    {
        if (!isComposite[i])
        {
            for (int j = i * i; j <= MAX_PRIME_CHECK; j += i)
            {
                isComposite[j] = true;
            }
        }
    }
}
int main()
{
    ll test ; cin>> test ;
    cout<< test/2520LL << endl;

    return 0;
}
