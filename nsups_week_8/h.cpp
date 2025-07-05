// Anik Barua .. 15.12.2023
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

    int t, n;
    cin >> n >> t;
    int a[n];
    for (int &k : a)
    {
        cin >> k;
    }
    int sum = 0;
    int c = 0;
    int left = 0, right;
    for (right = 0; right < n; right++)
    {
        sum += a[right];
        if (sum <= t)
        {
            c++;
        }
        else if (sum > t)
        {
            sum -= a[left];
            left++;
        }
    }
    cout << c << endl;
    return 0;
}
