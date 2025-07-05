// Anik Barua 10.23.2022
#include <bits/stdc++.h>
using namespace std;
#define dhruto                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

#define size1 10000000
#define rep(i, a, b) for (int i = (int)a; i < (int)b; i++)
bool check_possible(int n, int prime, int count)
{
    long primev = prime;
    while (n / primev && count > 0)
    {
        count -= n/primev;
        primev*=prime;
    }
     return count <= 0;
}
int main()
{
    dhruto;
    int n, d, count, temp;
    bool is_;
    while (scanf("%d%d", &n, &d) == 2)
    {
        temp = d;
        is_ = true;
        for (int i = 2; i * i <= d && is_; i++)
        {
            count = 0;
            while (d % i == 0)
            {
                d /= i;
                count++;
            }
            if (count > 0)
                is_ = check_possible(n, i, count);
        }
        if (d != 1 && is_)
        {
            is_ = check_possible(n, d, 1);
        }
        printf("%d %s %d!\n", temp, is_ ? "divides" : "does not divide", n);
      
    }

    return 0;
}