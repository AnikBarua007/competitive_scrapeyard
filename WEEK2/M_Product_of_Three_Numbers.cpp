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
bool perfect(long long int a)
{
    for (long long int i = 2; i * i <= a; i++)
    {
        if (a % i == 0)
        {
            long long int sq = sqrt(i);
            if (i == sq * sq)
            {

                return false;
            }
            if (a / i != i)
            {
                long long int x = (int)(a / i);
                long long int y = sqrt(x);

                if (y * y == x)
                {

                    return false;
                }
            }
            else if (a / i == i)
            {
                return false;
            }
        }
    }
    return true;
}
int main()
{
    long long int c;
    cin >> c;
    std::vector<long long int> v;
    for (long long int i = 1; i * i <= c; i++)
    {
        if (c % i == 0)
        {
            v.push_back(i);
            if (c / i != i)
            {
                v.push_back(c / i);
            }
        }
    }
    ////
    sort(v.rbegin(), v.rend());
    // ////
    // cout<<v[0];
    for (long int i = 0; i < v.size(); i++)
    {
        if (perfect(v[i]) == true)
        {
            cout << v[i];
            break;
        }
    }

    return 0;
}