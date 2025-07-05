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
}

int main()
{
    ll n, d;
    cin >> n >> d;
    vector<pair<ll, ll>> v(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i].first >> v[i].second;
    }
    sort(v.begin(), v.end());
    ll l = 0, r = 0, ans = 0, sum = 0;
    for (; r < n; r++)
    {
        sum += v[r].second;
        while (v[r].first - v[l].first >= d && l < n)
        {
            sum -= v[l].second;
            l++;
        }
        ans = max(ans, sum);
    }
    cout << ans << endl;
    return 0;
}
