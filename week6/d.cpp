// Anik Barua 25.10.2022
#include <bits/stdc++.h>
using namespace std;
#define dhruto                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
int primes[17] = {2 , 3, 5, 7, 11 , 13, 17 , 19 , 23 , 29 , 31} ;
#define size1 10000000
#define rep(i, a, b) for (int i = (int)a; i < (int)b; i++)
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int c_col = 1;
        vector<int> v(n);
        vector<int> colors(n, 0);
        rep(i, 0, n) cin >> v[i];
        rep(i, 0, 11)
        {
            bool col = true;
            rep(j, 0, n)
            {
                if (v[j] % primes[i] == 0 && colors[j] == 0)
                {
                    colors[j] = c_col;
                    col = false;
                }
            }
            if (col == false)
                c_col++;
        }
        cout << c_col-1 << endl;
        rep(i, 0, n)
        {
            cout << colors[i] << ' ';
        }
        cout << endl;
    }
    return 0;
}