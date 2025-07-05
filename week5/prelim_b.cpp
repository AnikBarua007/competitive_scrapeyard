#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>

using namespace std;
int c = 0;
pair<int, int> p_bonacchi(int n, int p, int k)
{
    c++;
    if (c == k)
    {
        return make_pair(n, k);
    }
    if (n < p)
    {
        return make_pair(-1, -1);
    }

    for (int i = 1; i <= p; i++)
    {
        p_bonacchi(n - i, p, k);
    }
}
#define moye_moye                     \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, p, k;
        cin >> n >> p >> k;
        pair<int, int> p1 = p_bonacchi(n, p, k);
        if (p1.first = -1)
        {
            cout << "Invalid" << endl;
        }
        else
            cout << p1.first << ' ' << p1.second << endl;
    }
}