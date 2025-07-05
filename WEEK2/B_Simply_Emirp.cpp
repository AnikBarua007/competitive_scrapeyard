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
bool is_prime(int a)
{
    for (int i = 2; i <= a / 2; i++)
    {
        if (a % i == 0)
            return false;
    }
    return true;
}
int reverse_num(int a)
{
    int rev = 0;
    while (a != 0)
    {
        int last_digit = a % 10;
        rev = last_digit + rev * 10;
        a /= 10;
    }
    return rev;
}
bool is_emirp(int a)
{
    if (is_prime(a) == true)
    {
        int reversed = reverse_num(a);
        if (reversed == a)
            return false;
        if (is_prime(reversed) == true)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    dhruto;
    int a;
    while (scanf("%d", &a) != EOF)
    {
        if (is_emirp(a) == true)
        {
            printf("%d is emirp.\n", a);
        }
        else if (is_prime(a) == true)
        {
            printf("%d is prime.\n", a);
        }
        else if (is_prime(a) == false)
        {
            printf("%d is not prime.\n", a);
        }
    }
    return 0;
}