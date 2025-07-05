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
    int h, p, a;
    scanf("%d%d%d", &h, &p, &a);
    if (h <= p)
    {
        cout<<1<<endl;
        return ;
    }
    double y, z, d;
    ll result = 0;
    y = p - 2 * a;
    z = 2 * (a - h);
    d = sqrt(y * y - 4 * p * z);
    result = ceil((-1 * y + d) / (2 * p));
    result = result + (result - 1);
    cout<< result<<endl;
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        solve();
    }
    return 0;
}
