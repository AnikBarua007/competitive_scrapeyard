// Anik Barua .. 15.12.2023
#include <bits/stdc++.h>
using namespace std;
#define dhruto                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
const int ep = 1e-7;
const int size = 1e7 + 9;
#define ll long long int
#define rep(i, a, b) for (int i = (int)a; i < (int)b; i++)
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int o = 0, z = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '0')
                z++;
            else
                o++;
        }
        if (z == o)
        {
            cout << 0 << endl;
            continue;
        }
        int bad = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '0')
            {
                o--;
            }
            else if (s[i] == '1' )
            {
                z--;
            }
        }
        cout << z + o << endl;
        // int coins = max(z, o) - min(z, o);
        // int zero = 0;
        // int one = 0;
        // int index = -1;
        // for (int i = 0; i < s.size(); i++)
        // {
        //     if (s[i] == '0')
        //         zero++;
        //     else
        //         one++;
        //     if (zero == one)
        //         index = i;
        // }
        // if (index != -1)
        // {
        //     cout << (s.size() - 1 - index) << endl;
        //     continue;
        // }
        // else
        // {
        //     cout << max(z, o) << endl;
        //     continue;
        // }
        // cout << coins << endl;
    }
    return 0;
}