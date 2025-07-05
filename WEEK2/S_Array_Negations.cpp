// Anik Barua
// 9.21.2023 1:45pm
#include <bits/stdc++.h>
using namespace std;
#define byebye return 0
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define endl "\n"

int main()
{
    // n integers
    // int k
    // k negations
    fast;
    int t;
    cin >> t;
    while (t--)
    {
        fast;
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            sum += v[i];
        }
        sort(v.begin(), v.end());
        for (int i = 0; i < k; i++)
        {
            sum -= v[i];
            sum -= (v[i] * 1);
        }
        printf("%d\n", sum);
    }
    return 0;
}