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
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    rep(i, 0, n) cin >> v[i];
    map<int, int> m;
    int ansl = 0, ansr = 0, l = 0, r = 0, ans = 0;
    for (; r < n; r++)
    {
        m[v[r]]++;
        while (m.size() > k)
        {
            m[v[l]]--;
            if (m[v[l]] == 0)
            {
                m.erase(v[l]);
            }
            l++;
        }
        if (r - l + 1 > ans)
        {
            ans = r - l + 1;
            ansl = l;
            ansr = r;
        }
    }
    // amar naam anik barua...........
    cout << ansl << ' ' << ansr;
}
int main()
{
    dhruto;
    solve();

    return 0;
}
