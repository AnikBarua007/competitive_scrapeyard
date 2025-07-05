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
#define INF (int)INT_MAX
#define MIN(A, B) A < B ? A : B
#define rep(i, a, b) for (int i = (int)a; i < (int)b; i++)
#define repll(i, a, b) for ((long long int)i = (long long int)a; i < (long long int)b; i++)
int main()
{
   // dhruto;
    int t;
    cin >> t;
    while (t--)
    {
        int min_val = INT_MAX   ;
        int n;
        cin >> n;
        getchar();
        n++;
        vector<int> v(n, 0);
        rep(i, 1, n)
        {
            string s;
            getline(cin, s);
            int x = 1;
            rep(j, 0, s.length())
            {
                if (s[j] == ' ')
                    x++;
            }
            v[i] = x;
            cout<<x<<endl;
            min_val = MIN(min_val,v[i]);
            cout<<min_val<<' ';
        }
        cout<<endl;
        vector<int> possible;
        rep(i, 1, n)
        {
            if (v[i] == min_val)
                possible.push_back(i);
        }
        rep(i, 0, possible.size())
        {
            cout << possible[i] << (i != possible.size() - 1 ? " " : "\n");
        }
    }
    return 0;
}
