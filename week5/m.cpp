#include <bits/stdc++.h>
using namespace std;
#define dhruto                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
void vec_s(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << ' ';
    }
    cout << endl;
}
int main()
{
    // a  1 1  1 12 --m
    // l r d
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> v(n);
    vector<int> vec(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    while (m--)
    {
        int l, r, d;
        cin >> l >> r >> d;
        l--;
        r--;
        vec[l] += d;
        vec[r + 1] -= d;
    }
    vec_s(vec);
    while (k--)
    {
        int x, y;
        cin >> x >> y;
        vec[x] += 1;
        vec[y] -= 1;
    }
    for (int i = 1; i < n; i++)
    {
        vec[i] += vec[i - 1];
    }

    vec_s(vec);
    for (int i = 0; i < n; i++)
    {
        v[i] += vec[i];
    }
    // for(int i=1;i<n;i++){
    //     v[i]+=v[i-1];
    // }
    vec_s(v);

    return 0;
}