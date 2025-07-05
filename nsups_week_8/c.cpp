#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    //simple math problem
    long long n;
   

    scanf("%d", &t);
   
    while (t--)
    {


        scanf("%lld", &n);
   
   
        printf("%lld\n", (long long)floor(sqrt(2.0 * n + 0.25) + 0.5) - 1);
   
   
    }
    return 0;
}
