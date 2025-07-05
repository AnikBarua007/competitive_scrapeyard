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
    dhruto;
    int n, k;
    while (cin >> n >> k)
    {
        vector<int> v(n);
        rep(i, 0, n) cin >> v[i];
        int low = 0, min = 100000, right = 0, sum = 0;
        for (right; right < n; right++)
        {
            sum += v[right];
            while (sum >= k)
            {
                if (right - low + 1 < min)
                {
                    min = right - low + 1;
                }
                else
                    min = min;
                sum-=v[low++];
            }
        }
        if (min == 100000)
            cout << 0 << endl;
        else
            cout << min << endl;
    }

    return 0;
}
