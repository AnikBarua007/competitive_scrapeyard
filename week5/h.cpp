#include <bits/stdc++.h>
using namespace std;
#define dhruto                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
void vec_s(vector<int> v)
{
    for (int i = 1; i < v.size(); i++)
    {
        cout << v[i] << ' ';
    }
    cout << endl;
}

int main()
{
    dhruto;
    int t;
    cin >> t;
    while (t--)
    {
            dhruto;
        int n, k;
        cin >> n >> k;
        vector<int> v(n + 1);
        vector<bool> v1(n + 1, false);
        vector<int> p_s(n + 1, 0);
        for (int i = 1; i <= n; i++)
        {
            cin >> v[i];
        }
        for (int i = 2; i <= n - 1; i++)
        {
            if (v[i - 1] < v[i] && v[i + 1] < v[i])
            {
                v1[i] = true;
            }
        }
        int c = 0;
        for (int i = 1; i <= n; i++)
        {
            if (v1[i] == true)
            {
                p_s[i] = ++c;
            }
            p_s[i]=c;
        }
        
        //  vec_s(p_s);
        int l1 = 1, r1 = k, l_min = 1, max_p = 0;
        while (r1 <= n)
        {
            int l = l1 + 1;
            int r = r1 - 1;
            int peak = p_s[r] - p_s[l - 1];
            if (peak > max_p)
            {
                max_p = peak;
                l_min = l1;
            }
            l1++;
            r1++;
        }
        cout << max_p + 1 << ' ' << l_min << endl;
    }
    return 0;
}