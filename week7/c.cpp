// Anik Barua 10.23.2022
#include <bits/stdc++.h>
using namespace std;
#define dhruto                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

#define size1 10000000
#define rep(i, a, b) for (int i = (int)a; i < (int)b; i++)
// vector of pairs fuck
int precal[1000000] = {0};
int numof_facts(int n)
{
    int t = 0;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            while (n % i == 0)
            {
                n /= i;
                t++;
            }
        }
    }
    if (n > 1)
        t++;
    return t;
}
int main()
{

    precal[1] = 1;
    precal[2] = 1;
    for (int i = 3; i <= 1000000; i++)
    {
        precal[i] = precal[i - 1] + numof_facts(i);
    }
    int n;
      while (cin >> n)
    {
        cout << precal[n] << endl;
    }
}