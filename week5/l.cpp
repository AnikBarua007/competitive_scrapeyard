#include <bits/stdc++.h>
using namespace std;
#define dhruto                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
const int n = 1e6 + 7;
int prime_factors[n];
int factor[14][n];
void sieve()
{
    for (int i = 2; i <= n; i++)
    {
        if (prime_factors[i] == 0)
        {
            for (int j = i; j <= n; j += i)
            {
                prime_factors[j]++;
            }
        }
    }
    for (int i = 0; i < 10; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            factor[i][j] = factor[i][j]+ factor[i][j - 1];
            if (prime_factors[j] == i)
            {
                factor[i][j]++;
            }
        }
    }
}
int main()
{
    dhruto;
    sieve();
    int t;
    cin >> t;

    while (t--)
    {
        int a, b, n;
        cin >> a >> b >> n;
        cout << factor[n][b] - factor[n][a - 1] << endl;
    }
    return 0;
}