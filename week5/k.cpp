#include <bits/stdc++.h>
using namespace std;
#define dhruto                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);


//     void vec_s(vector<int> v)
// {
//     for (int i = 0; i < v.size(); i++)
//     {
//         cout << v[i] << ' ';
//     }
//     cout << endl;
// }
int main()
{
    dhruto;
    // s -- s1 s2 s3 s4
    //.#
    string s;
    cin >> s;
    vector<int> v(s.size());
    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] == s[i - 1])
        {
            v[i - 1] = 1;
        }
    }
    // vec_s(v);   
    for (int i = 1; i < s.size(); i++)
    {
        v[i] += v[i - 1];
    }
    // vec_s(v);   
    int q;
    cin >> q;
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        l--;
        r--;r--;
        if (l == 0)
            cout << v[r] << endl;
        else
            cout << v[r] - v[l - 1] << endl;
    }
    return 0;
}