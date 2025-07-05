#include <bits/stdc++.h>
using namespace std;
#define dhruto                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
const int ep = 1e-7;
const int size = 1e7 + 9;
#define ll long long int
#define rep(i, a, b) for (int i = (int)a; i < (int)b; i++)
int main()
{

    ll a, l, m, r;
    scanf("%lld %lld %lld %lld",&a,&m,&l,&r);
    int  c = 0;
    for (ll low = l; low <= r; low++)
    {
        if ((low - a) % m == 0)
        { // Check if (low - a) is divisible by m
            c++;
        }
    }
    printf("%d",c);
}
