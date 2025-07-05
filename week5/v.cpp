// Anik Barua 22.10.2023
#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for (int i = (int)a; i < (int)b; i++)
#define moye_moye                     \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);

    rep(i, 0, n) cin >> v[i];
    int q;
    cin >> q;
    int hi;
    while (q--)
    {
        cin >> hi;
        auto lb = lower_bound(v.begin(), v.end(), hi);
        auto ub = upper_bound(v.begin(), v.end(), hi);
        if (lb == v.begin())
            cout << "X" << ' ';
        else
        {
            lb--;

            cout << *lb << ' ';
        }

        if (ub == v.end())
        {
            cout << "X" << endl;
        }
        else
        {
            cout << *ub << endl;
        }
    }

    // rep(i,0,q){

    // }
    return 0;
}