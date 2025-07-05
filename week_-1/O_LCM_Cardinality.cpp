// Anik Barua .. 15.12.2023
#include <bits/stdc++.h>
using namespace std;
const int sz = 1e5 + 1;
#define dhruto                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
const int ep = 1e-7;
const int size = 1e7 + 9;
#define LL long long int
#define endl '\n'
#define rep(i, a, b) for (int i = (int)a; i < (int)b; i++)
#define repll(i, a, b) for ((long long int)i = (long long int)a; i < (long long int)b; i++)
int main()
{
    ios_base::sync_with_stdio(false);
    unordered_map<int, int> primes;
    int n;
    int ans;
    cin >> n;
    while (n--)
    {

        int a;
        cin >> a;
        for (int i = 2; i * i <= a; i++)
        {
            if (a % i == 0)
            {
                primes[i]++;
            }
            while (a % i == 0)
            {
                a /= i;
            }
        }
        if (a > 1)
            primes[a]++;
    }
    ans = 1;
    for (auto it = primes.begin(); it != primes.end(); it++)
    {
        ans = max(ans, (*it).second);
    }
    cout << ans << endl;
    return 0;
}
