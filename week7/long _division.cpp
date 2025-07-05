
// Anik Barua 3,12.2023
#include <bits/stdc++.h>
using namespace std;
#define dhruto                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
const int ep = 1e7;
#define size1 1000010
#define ll long long int
#define vi
#define pb push_back
// #define vs vector<int> v
// typedef vector<int> vi;
#define rep(i, a, b) for (int i = (int)a; i < (int)b; i++)
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int size, c;

        cin >> size >> c;

        vector<int> v(size);
        rep(i, 0, size)
        {
            cin >> v[i];
        }

        sort(v.begin(), v.end());
        int max = -1;
        rep(i, 1, size)
        {
            if (v[i] - v[i - 1] > max)
                max = v[i] - v[i - 1];
        }
        cout << max-1<< endl;
    }
    return 0;
}