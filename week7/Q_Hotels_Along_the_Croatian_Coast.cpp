// Anik Barua .. 15.12.2023
#include <bits/stdc++.h>
using namespace std;
#define dhruto                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
const int ep = 1e-7;
const int size = 1e7 + 9;
#define ll long long int
#define rep(i, a, b) for (int i = (int)a; i < (int)b; i++)
#define repll(i, a, b) for (long long i = (long long)a; i < (long long)b; i++)
int main()
{
    ll n;
    ll k;
    cin >> n >> k;
    vector<ll> v(n);
    repll(i, 0, n) cin >> v[i];
    ll left = 0, right, sum = 0, max = 0;
    repll(right, 0, n)
    {
        sum += v[right];
        while (sum > k)
        {
            sum -= v[left];
            left++;
        }
        if (sum >= max)
            max = sum;
    }
    cout << max;
    return 0;
}