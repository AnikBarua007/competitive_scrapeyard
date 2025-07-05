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
    int t;
    cin >> t;
    while (t--)
    {
        int size;
        cin >> size;
        vector<long long int> v;
        for (int i = 0; i < size; i++)
        {
            long long int c;
            cin >> c;
            v.push_back(c);
        }
        sort(v.begin(), v.end());
        long long int ans = v.front() * v.back();
        vector<long long int> a;
        for (long long int i = 2; i * i <= ans; i++)
        {
            if (ans % i == 0)
            {
                a.push_back(i);

                if (ans / i != i)
                {
                    a.push_back(ans / i);
                }
            }
        }
        sort(a.begin(), a.end());
        if (a == v)
            cout << ans << endl;
        else
            cout << "-1" << endl;
    }
    return 0;
}
