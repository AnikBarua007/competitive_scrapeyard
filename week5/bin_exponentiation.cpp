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
long long int bin_expo_recurse(long long int power, int base)
{
    if (base == 0)
        return 1;
    long long res = bin_expo_recurse(base, power / 2);
    if (base % 2 == 1)
        return res * res * base;
    else
        res *res;
}
int main()
{

    int base, power;
    cin >> base >> power;
    cout << bin_expo_recurse(base, power);
    return 0;
}