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
#define repll(i, a, b) for ((long long int)i = (long long int)a; i < (long long int)b; i++)
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int sum = 0;
        int n;
        cin >> n;
        rep(i, 0, n)
        {
            int test;
            cin >> test;
            sum += test;
        }
        int root = sqrt(sum);
        if (root * root == sum)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
