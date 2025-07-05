// Anik Barua .. 15.12.2023
#include <bits/stdc++.h>
using namespace std;
#define dhruto                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
const int ep = 1e-7;
const int size = 1e7 + 9;
#define ll long long int
#define endl '\n'
#define rep(i, a, b) for (int i = (int)a; i < (int)b; i++)
#define repll(i, a, b) for ((long long int)i = (long long int)a; i < (long long int)b; i++)
int prime_factor(ll n)
{
    ll total = 1;
    while(n%2==0)n/=2;
    for (ll i = 3; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            int c = 0;
            while (n % i == 0)
            {
                c++;
                n /= i;
            }
            total = total * (c + 1);
        }
    }
    if (n > 1)
       total =  total * 2;
    return total;
}
int main()
{
    dhruto;
    int cs = 1; 
    int t;
    cin >> t;
    int c;
    while (t--)
    {
        cout << "Case " << cs++ << ": ";
        c = 0;
        ll n;
        cin >> n;
        int pf = prime_factor(n);
        cout << pf - 1 << endl;
    }
    return 0;
}
