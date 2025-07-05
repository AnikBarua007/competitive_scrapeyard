// Anik Barua 25.10.2022
#include <bits/stdc++.h>
using namespace std;

int bin_ex(int base, int power, int mod)
{
    base %= mod;
    int result = 1;
    while (power > 0)
    {
        if (power % 2 == 1)
        {
            result = base * (result % mod);
        }
        result = base * (base % mod) ;
        power /= 2;
    }
    return result % mod;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int base, power;
        cin >> base >> power;
        cout << bin_ex(base, power, 10);
        cout << endl;
    }
    return 0;
}