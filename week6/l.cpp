#include <bits/stdc++.h>
using namespace std;
bool ar[3000008];
#define dhruto                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
void sieve(int n)
{
    memset(ar, true, sizeof(ar));
    ar[0] = true;
    ar[1] = true;
    for (int i = 4; i <= n; i += 2)
    {
        ar[i] = false;
    }
    for (int i = 3; i * i <= n; i += 2)
    {
        if (ar[i])
        {
            for (int j = i * i; j <= n; j += (i + i))
            {
                ar[j] = false;
            }
        }
    }
    for (int i = 4; i <= n; i++)
    {
        if (!ar[i])
        {
            for (int j = i * 2; j <= n; j += i)
            {
                ar[j] = true;
            }
        }
    }
}
int main()
{
    sieve(3000008);
    int n;
    while (cin >> n)
    {

        int c = 0;
        while (n--)
        {
            int nu;
            cin >> nu;
            if (ar[nu] == false)
                c++;
        }
        cout << c << endl;
    }
    return 0;
}