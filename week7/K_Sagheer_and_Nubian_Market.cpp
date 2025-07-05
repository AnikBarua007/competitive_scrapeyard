#include <bits/stdc++.h>
using namespace std;
#define dhruto                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
// const int ep = 1e-7;
// const int size = 1e7 + 9;
// #define ll long long int
#define ll long long
ll ans = 0;
#define rep(i, a, b) for (int i = (int)a; i < (int)b; i++)
bool check(vector<int> &v, int mid, int target, int max)
{
    vector<ll> prefix(v.size());

    for (long long  i = 0; i < v.size(); i++)
    {
        prefix[i] = v[i] + ((i + 1) * mid);
    }
    sort(prefix.begin(), prefix.end());
    ll  to = 0;
    for (int i = 0; i < mid; i++)
    {
        to += prefix[i];
    }
    if (to > target)
    {

        return false;
    }
    ans = to;
    return true;
}
int main()
{

    int n, k;
    cin >> n >> k;
    vector<int> vec(n);
    int max = -1;
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
        if (vec[i] > max)
            max = vec[i];
    }
    // sort(vec.begin(), vec.end());
    int low = 1;
    int high = n;
    int result = 0;
    while (low <= high)
    { 
        int mid = low + (high - low) / 2;
        if (check(vec, mid, k, max))
        {
            low = mid + 1;
            result = mid;
        }
        else
            high = mid - 1;
    }
    int total = 0;
    // for (int i = 0; i < result; i++)
    // {
    //     total += (vec[i] + result * (i + 1));
    // }
    cout << result << ' ' << ans << endl;
    return 0;
}