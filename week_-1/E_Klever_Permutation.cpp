// Anik Barua .. 15.12.2023
#include <bits/stdc++.h>
using namespace std;
const int sz = 1e5 + 1;
#define dhruto                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
const int ep = 1e-7;
const int size = 1e7 + 9;
#define ll long long int
#define endl '\n'
#define rep(i, a, b) for (int i = (int)a; i < (int)b; i++)
#define repll(i, a, b) for ((long long int)i = (long long int)a; i < (long long int)b; i++)
void printv(vector<int> &v)
{
    rep(i, 0, v.size()) cout << v[i] << ' ';
    cout << endl;
}
void solve1()
{
}
void solve()
{
    int n, q;
    cin >> n >> q;
    vector<int> v(n);
    rep(i, 0, n)
    {
        cin >> v[i];
        v[i]--;
    }
    vector<long long> prefix(n);
    vector<long long> zeros(n);
    rep(i, 0, n)
    {
        if (v[i] == 0)
        {
            zeros[i] = 1;
        }
    }
    rep(i, 0, n) zeros[i] += zeros[i - 1];
    prefix[0] = v[0];
    for (int i = 1; i < n; i++)
    {
        prefix[i] = prefix[i - 1] + v[i];
        // prefix[i] = prefix[i-1]+v[i];
    }

    while (q--)
    {
        int l, r;
        cin >> l >> r;
        l--;
        r--;
        int len = r - l + 1;
        if (len == 1)
            cout << "NO" << endl;
        else
        {
            ll sum = prefix[r] - prefix[l] - 1;
            ll ones = zeros[r] - zeros[l] - 1;
            if (sum >= ones)
                cout << "YES " << endl;
            else
            {
                cout << "NO" << endl;
            }
        }
    }
}
int main()
{
    dhruto;
    int t;
    cin >> t;
    while (t--)
    {
        solve();
        // solve1();
    }
    return 0;
}
