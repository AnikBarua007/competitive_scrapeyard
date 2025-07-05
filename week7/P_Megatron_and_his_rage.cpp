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

    dhruto;
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        rep(i, 0, n) cin >> v[i];
        int left = 0, right, total_planets = 0, total_megratrons = 0, max_megatrons = 0;
        rep(right, 0, n)
        {
            total_megratrons += v[right];
            while (total_megratrons > k)
            {
                total_megratrons -= v[left];
                left++;
            }
            int length = right - left + 1;
            if (length > total_planets)
            {
                total_planets = length;
                max_megatrons = total_megratrons;
            }
            if (length == total_planets)
            {
                max_megatrons = min(max_megatrons, total_megratrons);
            }
        }
        cout << max_megatrons << ' ' << total_planets << endl;
    }
    return 0;
}