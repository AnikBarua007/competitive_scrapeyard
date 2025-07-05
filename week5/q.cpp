#include <bits/stdc++.h>
using namespace std;
#define dhruto                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);


int main()
{
    dhruto;
    long long int n;
    cin >> n;
    vector<long long> v(200000);
    for (int i = 0; i < n; i++)
    {

        cin >> v[i];
    }
    long long int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (i > 0)
            ans += abs(v[i] - v[i - 1]);
        else
            ans += abs(v[i]);
    }
    cout << ans << endl;
    return 0;
}