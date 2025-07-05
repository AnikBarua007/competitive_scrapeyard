#include <bits/stdc++.h>
using namespace std;
const int n = 1000001;
bool arr[n];
#define dhruto                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
// brute force method is not applicable
// if the given numbers sqrt is a prime number then the number is t-primes
void sieve()
{
    memset(arr, true, sizeof(arr));
    arr[0] = false;
    arr[1] = false;
    for ( int i = 2; i*i < n; i++)
    {
        if (arr[i] == true)
        {
            for ( int j = i * i; j <= n; j += i )
            {
                arr[j] = false;
            }
        }
    }
}
int main()
{
    dhruto;
    sieve();
    int tests;
    long long n;
    cin >> tests;
    while (tests--)
    {
        cin >> n;
        long long int  ain = (sqrt(n));
         if (arr[ain] == true && ain * ain == n)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
    return 0;
}
