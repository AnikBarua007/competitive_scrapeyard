// Anik Barua 10.23.2022
#include <bits/stdc++.h>
using namespace std;
#define dhruto                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
int main()
{
    dhruto;
    int n;
    while (cin >> n && n != 0)
    {
        cout << n << " = ";
        if (n < 0)
        {
            n *= -1;
            cout << -1 << " x ";
        }
        for (long long int i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {

                while (n % i == 0)
                {
                    n /= i;
                    cout << i;
                    if (n > 1)
                        cout << " x ";
                }
            }
        }
        if (n > 1)
        {
            cout << n;
        }
        cout << endl;
    }
    return 0;
}