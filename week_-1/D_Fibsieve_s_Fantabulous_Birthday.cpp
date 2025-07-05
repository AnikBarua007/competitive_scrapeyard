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
int checkzero(int num)
{
    int cn = 0;
    while (num > 0)
    {
        cn += num / 5;
        num /= 5;
    }
    // for(int i = 5 ; num/i>0 ; i*=5){
    //     cn += num/i;
    // }
    return 0;
}

ll s, r, l, ro, col;
int main()
{
    dhruto;
    int t;
    cin >> t;
    int cs = 0;
    while (t--)
    {
        cin >> s;
        r = ceil(sqrt(s * 1.0));
        l = r * r - s;
        if (l < r)
        {
            ro = r;
            col = l + 1;
        }
        else
        {
            ro = s - (r - 1) * (r - 1);
            col = r;
        }
        if (r & 1)
        {
            ll t = col;
            col = ro;
            ro = t;
        }
        cout << "Case " << ++cs << ": " << ro << " " << col << endl;
    }
    return 0;
}
