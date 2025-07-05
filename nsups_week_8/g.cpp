// Anik Barua .. 15.12.2023
#include <bits/stdc++.h>
using namespace std;
#define dhruto                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
const int ep = 1e7;
#define size1 1000010
#define ll long long int
#define rep(i, a, b) for (int i = (int)a; i < (int)b; i++)
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        dhruto;
        int h, p, a;
        cin >> h >> p >> a;
        if (h <= p)
        {
            cout << "1" << endl;
            continue;
        }
        double y, z, d;
        ll result = 0;
        y = p - 2 * a;
        z = 2 * (a - h);
        d = sqrt(y * y - 4 * p * z);
        result = ceil((-1 * y + d) / (2 * p));
        result = result + (result - 1);
        cout << result << endl;
    }
    return 0;
}