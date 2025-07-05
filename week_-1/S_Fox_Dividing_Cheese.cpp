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
ll a[6];
int main()
{
    ll m, n, t, b, c, d, i, j, k, x, y, z, l, q, r;

    ll cnt = 0, ans = 0;
    cin >> n >> m;

    while (n % 2 == 0)
        n /= 2, a[2]++;
    while (n % 3 == 0)
        n /= 3, a[3]++;
    while (n % 5 == 0)
        n /= 5, a[5]++;
    while (m % 2 == 0)
        m /= 2, a[2]--;
    while (m % 3 == 0)
        m /= 3, a[3]--;
    while (m % 5 == 0)
        m /= 5, a[5]--;

    if (m != n)
        cout << -1 << endl;
    else
        cout << (abs(a[2]) + abs(a[3]) + abs(a[5]));
    return 0;
}