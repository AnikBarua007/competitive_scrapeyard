// Anik Barua .. 15.12.2023
#include <vector>
#include<iostream> 
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
void solve(vector<int> &v, int n)
{
}

int main()
{
    dhruto;
    int t;
    cin >> t;
    while (t--)
    {
        int n, s;
        cin >> n >> s;
        vector<int> v(n);
        rep(i, 0, n) cin >> v[i];
        int l = 0, r = 0, ans = n + 1;
        int sum = 0;
        while (true)
        {
            while (r < n && sum < s)
                sum += v[r++];
            if (sum < s)
                break;
            ans = min(ans, r - l);
            sum -= v[l++];
        }
        if (ans == n + 1)
            cout << 0 << endl;
        else
            cout << ans << endl;
    }
    return 0;
}
