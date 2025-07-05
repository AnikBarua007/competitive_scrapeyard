#include <bits/stdc++.h>
using namespace std;
#define dhruto                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

int main()
{
    dhruto;
    int n, t, c;
    cin >> n >> t >> c;
    vector<int> v;
    v.push_back(-1);
    for (int i = 0; i < n; i++)
    {
        int tem;
        cin >> tem;
        if (tem > t)
            v.push_back(i);
    }
    v.push_back(n);
    long long int count = 0;
    for (int i = 1; i < v.size(); i++)
    {
        int diff = v[i] - v[i - 1] - 1;
        count += max(diff - c + 1, 0);
    }
    cout << count << endl;
    return 0;
}