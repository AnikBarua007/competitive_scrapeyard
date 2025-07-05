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
bool check(vector<int> &v, int mid, int n, int k)
{
    int times = 0;
    rep(i, 0, n)
    {
        times += (v[i] / mid);
    }
    if (times >= k)
        return true;
    else
        return false;
}
int lower_bound(vector<int> &v, int size, int value_around)
{
    int low = v[0], high = v[size - 1];
    int ans = -1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        // int mid = low + (high - low ) / 2 ;
        if (v[mid] >= value_around)
        {
            ans = mid;
            high = mid - 1;
        }
        else
        {
            high = mid + 1;
        }
    }
    return ans;
}
int lower_bound(vector<int> &v, int size, int value_around)
{
    int low = v[0], high = v[size - 1];
    int ans = -1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        // int mid = low + (high - low ) / 2 ;
        if (v[mid] >= value_around)
        {
            ans = mid;
            high = mid - 1;
        }
        else
        {
            high = mid + 1;
        }
    }
    return ans;
}
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
        int max = 0;
        rep(i, 0, n)
        {
            cin >> v[i];
            if (v[i] > max)
                max = v[i];
        }
        sort(v.begin(), v.end());
        int ans = 0;
        int low = 1, high = max + 1;
        while (low <= high)
        {
            int mid = low + ((high - low) / 2);
            // int mid  = low + (high - low ) / 2 ;
            // int mid = (low +  high  ) / 2 ;// 10 ^ 9 + 10 ^ 9 --> 10 ^ 9  + 1
            //  negative number
            //  error -- > overflow error
            //       = low  + ( high - low ) / 2 ;
            if (check(v, mid, n, k))
            {
                low = mid + 1;
                ans = mid;
            }
            else
            {
                high = mid - 1;
            }
        }
        cout << ans << endl;
    }
    return 0;
}