// Anik Barua .. 15.12.2023
#include <bits/stdc++.h>
using namespace std;
#define dhruto                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
const int ep = 1e-7;
const int size = 1000005;
// const int size = 9993;
#define ll long long int
#define endl '\n'
#define rep(i, a, b) for (int i = (int)a; i < (int)b; i++)
#define repll(i, a, b) for ((long long int)i = (long long int)a; i < (long long int)b; i++)
int gcd(int a, int b)
{
    return (b == 0) ? a : gcd(b, a % b);
}
int main()
{
    int n;
    cin >> n;
    int nume, deno;
    nume = (n / 2) - 1;
    deno = (n / 2) + 1;
    if (n == 3)
    {
        cout << 1 << " " << 2 << endl;
        return 0;
    }
    if (n % 2 == 1)
        nume++;
    int gc = __gcd(nume, deno);
    if (gc != 1)
    {
        deno++;
        nume--;
    }
     cout<< nume << ' ' <<  deno <<endl ;
    return 0;
}