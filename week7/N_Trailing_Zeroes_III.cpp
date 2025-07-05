// Anik Barua .. 15.12.2023
#include <bits/stdc++.h>
using namespace std;
#define dhruto                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
// const int ep = 1e-7;
// const int sz = 1e7 + 9;
#define ll long long int
#define rep(i, a, b) for (int i = (int)a; i < (int)b; i++)
const long long sz = 1e18;
long long calculate(ll z)
{
    ll tz = 0;
    for (ll i = 5; i <= z; i *= 5)
    {
        tz += (z / i);
    }
    return tz;
}

// binary search here is used and other wise precalculation is also a posiibiliyu
int main()
{

    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        ll x;
        cin >> x;
        ll low = 1, high = sz, answer = -1;
        while (low <= high)
        {
            ll mid = (low + high) / 2;
            ll zeros = calculate(mid);
            if (zeros > x)
                high = mid - 1;
            else if (zeros < x)
                low = mid + 1;
            else
            {
                answer = mid;
                high = mid - 1;
            }
        }
        if (answer == -1)
            printf("Case %d: impossible\n", i);
        else
            printf("Case %d: %lld\n", i, answer);
    }
    return 0;
}