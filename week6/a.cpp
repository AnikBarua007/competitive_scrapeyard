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
// long long int bin_expo_recurse(long long int base, long long power)
// {
//     if (power == 0)
//         return 1;
//     long long res = bin_expo_recurse(base, power / 2);
//     if (power % 2 == 1)
//         return res * res * base;
//     else
//         res *res;
// }
// this is a iterative approach so its slow as fuck

// long long bin_e(long long base, long long power)
// {

//     long long res = 1;
//     while (power > 0)
//     {
//         if (power % 2== 1)
//         {
//             res *= base;
//         }
//         base *= base;
//         power >>= 1; // right shift
//     }
//     return res;
// }
// long long bin_iter(int base,int power){
//     long long result=1;
//     while(power>0){
//         if(power&1)result*=base;//and oeration does is that it adds 1 to the binary re__ of the number and returns the lsb,which is 0 for even and  1 for odd numbers 
//         //
//         base*=base;
//         power>>=1;//right shift one means shifting each bits by one position,which results in the number dividing by 2 ^ n where n is the number of bits shifted

//     }return result;
// }

  // c=(a*b)%10; c's last digit
  //suppose a is int and b is int so ==> over flow for big numbers
  //last digit ==> c=(a%10 * b %10)%10;
long long bin_iter(int base,int power,int mod){
    base %= mod; 
    long long result=1;
    while(power>0){
        if(power&1)result=result*base%mod;//and oeration does is that it adds 1 to the binary re__ of the number and returns the lsb,which is 0 for even and  1 for odd numbers 
        //
        base=base*base%mod;
        power>>=1;//right shift one means shifting each bits by one position,which results in the number dividing by 2 ^ n where n is the number of bits shifted

    }
    return result%mod;
}
//time --> o(log2 (power))
int main()
{
    int base, power,mod;
    while (cin >> base >> power>>mod)
    {
        cout << bin_iter(base, power,mod)<<endl;
    }
    return 0;
}