// Anik Barua .. 15.12.2023
#include <bits/stdc++.h>
using namespace std;
#define dhruto                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
const int ep = 1e-7;
const int size = 1e7 + 9;
#define ll long long int
#define endl '\n'
#define rep(i, a, b) for (int i = (int)a; i < (int)b; i++)
#define repll(i, a, b) for ((long long int)i = (long long int)a; i < (long long int)b; i++)
int main()
{
    int n, ans;

    string s;
    cin >> n >> s;
    ans = n;
    for (int i = 1; i <= n / 2; i++)
    {
        if (s.substr(0, i) == s.substr(i, i))
            ans = n - i + 1;
    }
    cout << ans << endl;
    return 0;
}