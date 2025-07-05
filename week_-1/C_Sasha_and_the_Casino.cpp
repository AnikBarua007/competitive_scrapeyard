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
void solve(){
    int k, x, a;
    cin >> k >> x >> a;
    int total = 0;
    for (int i = 0; i < x+1 i++)
    {
        int bet = (total / k - 1);
        bet++;
        total += bet;
        if (total > a)
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout<<"YES"<<endl;
    return ;
}
int main()
{
    dhruto;
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
