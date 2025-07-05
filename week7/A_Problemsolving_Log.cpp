// Anik Barua .. 15.12.2023
#include <bits/stdc++.h>
using namespace std;
#define dhruto                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
// const int ep = 1e-7;
// const int size = 1e7 + 9;
#define ll long long int
#define rep(i, a, b) for (int i = (int)a; i < (int)b; i++)
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int sz;
        cin >> sz;
        char v[sz];
        for (int i = 0; i < sz; i++)
        {
            cin >> v[i];
        }
        // cout<<v[4];
        int count = 0;
        for (int i = 0; i < sz; i++)
        {
            int time = 0;
            if (v[i] != '0')
            {
                time++;
                for (int j = i + 1; j < sz; j++)
                {
                    if (v[j] == v[i])
                    {
                        time++;
                        v[j] = '0';
                    }
                }
                // cout << (((int)v[i] - 'A') + 1) << endl;
                if (time >= (((int)v[i] - 'A') + 1))
                {
                    count++;
                }
            }
            // cout<<(int)v[i]<<endl;
        }
        cout << count << endl;
    }
    return 0;
}