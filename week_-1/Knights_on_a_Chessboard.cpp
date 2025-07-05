
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
string mainarr = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
string base_cov
int main()
{
    dhruto;
    int t;
    cin >> t;
    while (t--)
    {
        int a, b ;string s; cin>>a>>b>>s;
        cout<<a<<' '<<s<<endl;
        cout<<b<<' '<<base_cov(a,b,s);
    }
    return 0;
}
