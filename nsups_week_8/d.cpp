#include <bits/stdc++.h>
using namespace std;
#define dhruto                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
const int ep = 1e7;
#define size1 1000010
#define ll long long int

#define rep(i, a, b) for (int i = (int)a; i < (int)b; i++)
bool possible(vector<int> &v, int n, int k, int mid)
{
    int partittion = 1;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += v[i];
        if (sum > mid)
        {
            partittion++;
            sum = v[i];
        }
    }
    if (partittion <= k)
        return true;
    return false;
}
int binary(vector<int> &v, int n, int k)
{
    int sum = 0;
    int mx = 0;
    for (int i = 0; i < n; i++)
    {
        sum += v[i];
        mx = max(v[i], mx);
    }
    int l = mx, r = sum;
    int ans = 0;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (possible(v, n, k, mid))
        {
            ans = mid;
            r = mid - 1; 
        }
        else
            l = mid + 1;
    }
    return ans;
}
int main()
{
    dhruto;
    int t;
    cin >> t;
    int cs = 0;
    while (t--)
    {

        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        rep(i, 0, n) cin >> v[i];
        int ans = binary(v, n, k);
        cout <<"Case "<<++cs<<": " <<ans << endl;
    }

    return 0;
}