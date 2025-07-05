// Anik Barua .. 15.12.2023
#include <bits/stdc++.h>
using namespace std;
#define dhruto                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
// const int ep = 1e-7;
// const int size = 1e7 + 9;
#define ll long long int
#define endl '\n'
#define rep(i, a, b) for (int i = (int)a; i < (int)b; i++)
#define repll(i, a, b) for ((long long int)i = (long long int)a; i < (long long int)b; i++)
int main()
{
    int n;
    cin >> n;
    multiset<int> m;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        m.insert(a);
    }
    int first = *prev(m.end());
    for (int i = 1; i <= first; i++)
    {
        if (first % i == 0)
        {
            m.erase(m.find(i));
        }
    }
    cout << first << ' ' << *prev(m.end()) << endl;
    return 0 ;
}