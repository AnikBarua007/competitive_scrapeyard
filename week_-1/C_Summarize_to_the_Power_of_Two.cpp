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
    int n;
    cin >> n;
    vector<int> v(n);
    rep(i, 0, n) cin >> v[i];
    int c = 0;
    rep(i, 0, n)
    {
        bool is = false;
        rep(j, 0, n)
        {
            if (i == j)
                continue;

            ll sum = v[i] + v[j];
            // if (checker[j] == -1)
            //     continue;
            while (sum % 2 == 0)
            {
                sum /= 2;
            }
            if (sum == 1)
            {
                // cout << v[i] << ' ' << v[j] << endl;
                is = true;
                break;
                // if(v[j]==5 ) cout<<v[i]<<endl;
            }
        }
        if (is == false)
            c++;
       
    }
    cout << c << endl;
    return ; 
}

int main()
{
    dhruto;
    
        solve();
        // solve1();
    
    return 0;
}
