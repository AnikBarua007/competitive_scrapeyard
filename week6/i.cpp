#include <bits/stdc++.h>
using namespace std;
#define dhruto                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define size1 10000000
#define rep(i, a, b) for (int i = (int)a; i < (int)b; i++)
long long int bin_expo(long long int base, long long int power, long long int mod)
{
    base %= mod;
    long long result = 1;
    while (power > 0)
    {
        if (power & 1 == 1) // 10 // and operation with 1 // 10 + 1 // 1 // odd numbers // even number  // lsb //
        {
            // 10 even number 1
            result = result * base % mod;
        }
        base = base * base % mod;
        power >>= 1; // right shift equal // power rught shift by 1 /// 2 // 10 // 1 // ans = power / 2 ^ n
    }
    return result % mod;
} //
int main()
{
    // test case 50
    // for(int i =0; i<n ; i++){ // o(n) -->10 ^ 9 1s   //1s --> 10 ^ 8 - 9                  //} 50s -- 2s //tle
    for (int i = 1; i < 100000; i *= 10) // 10 ^ 9 --> 1 s // (1/10^ 9 * 100000)
                                         // printf("|%03d|%3d|\n", i, i);
        return 0;
}