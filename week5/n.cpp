// Anik Barua 10.23.2022
#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
#include <cstdio>
#include <cmath>
using namespace std;
#define dhruto                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define size1 10000000
#define rep(i, a, b) for (int i = (int)a; i < (int)b; i++)
vector<bool> primes(size1 + 1);
void sieve()
{

    for (int i = 4; i <= size1; i += 2)
    {
        primes[i] = true;
    }
    for (int i = 3; i * i <= size1; i += 2)
    {
        if (primes[i] == false)
            for (int j = i * i; j <= size1; j += i)
            {
                primes[j] = true;
            }
    }
}
int arr[size1 + 1] = {0};
int factors[size1 + 1] = {0};
int main()
{
    dhruto;
    sieve();
    int n;
    cin >> n;
    rep(i, 0, n)
    {
        int temp;
        cin >> temp;
        arr[temp]++;
    }
    for (int i = 2; i <= size1; i++)
    {
        if (primes[i] == false)
        {
            for (int j = i; j <= size1; j += i)
            {
                factors[i] += arr[j];
            }
        }
    }
    for (int i = 1; i <= size1; i++)
    {
        factors[i] += factors[i - 1];
    }
    int q;
    cin >> q;
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        if (r > size1)
            r = size1;
        if (l > size1)
            cout << 0 << endl;
        else
            cout << factors[r] - factors[l - 1] << endl;
    }
    return 0;
}