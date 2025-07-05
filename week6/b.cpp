// Anik Barua 10.23.2022
#include <bits/stdc++.h>
using namespace std;
#define dhruto                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define ll long long
#define rep(i, a, b) for (ll i = (ll)a; i < (ll)b; i++)
void show_p_factors(ll n)
{
    int count;
    if (n % 2 == 0)
    {
        count = 0;
        while (n % 2 == 0)
        {
            count++;
            n /= 2;
        }
        cout << 2 << '^' << count << ' ';
    }
    for (int i = 3; i * i <=n; i += 2)
    {
        if (n % i == 0)
        {
            count = 0;
            while (n % i == 0)
            {
                count++;
                n /= i;
            }
            cout << i << '^' << count << ' ';
        }
    }
    if (n > 2)
        cout << n << '^' << 1 << endl;
}
int main()
{
    ll n;
    while (cin >> n && n != 0)
    {
        show_p_factors(n);
    }
    return 0;
}