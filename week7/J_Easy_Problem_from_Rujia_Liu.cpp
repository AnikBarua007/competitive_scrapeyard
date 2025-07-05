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
    dhruto;
    int n, q, m;
    while (cin >> n >> q)
    {

        map<int, vector<int>> grid;
        rep(i, 0, n)
        {
            int num;
            cin >> num;
            grid[num].push_back(i);
        }
        map<int, vector<int>>::iterator it;
        while (q--)
        {
            cin >> n >> m;
            n--;
            it = grid.find(m);
            if (it != grid.end())
            {
                if (it->second.size() > n)
                {
                    cout << (it->second[n] + 1) << endl;
                }
                else
                {
                    cout << 0 << endl;
                }
            }
            else if (it == grid.end())
                cout << 0 << endl;
        }
    }

    return 0;
}
