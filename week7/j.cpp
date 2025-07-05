// Anik Barua 10.23.2022
#include <bits/stdc++.h>
using namespace std;
#define dhruto                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

#define size1 10000000
#define rep(i, a, b) for (int i = (int)a; i < (int)b; i++)
int main()
{
    long long int n;
    cin >> n;
    long long int twos = 0;
    long long int t = n;
    if (n % 2 == 1)
    {
        cout << 0 << endl;
        return 0;
    }
    else
    {
        long long ans = 0;
        long long div = n / 2;
        while (div)
        {
            div /= 5;
            ans += div;
        }
        cout << ans << endl;
    }
    return 0;
}