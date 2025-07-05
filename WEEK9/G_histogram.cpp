#include <bits/stdc++.h>
using namespace std;
#define dhruto                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
const int ep = 1e-7;
#define ll long long int
#define endl '\n'
#define rep(i, a, b) for (int i = (int)a; i < (int)b; i++)
#define repll(i, a, b) for ((long long int)i = (long long int)a; i < (long long int)b; i++)
int main()
{
    dhruto;
    int cs = 0;
    int t;
    cin >> t;
    while (t--)
    {

        cout << "Case " << ++cs << ": ";
        int sz;
        cin >> sz;
        vector<int> v(sz);
        rep(i, 0, sz) cin >> v[i];
        stack<int> st;
        vector<int> left(sz);
        vector<int> right(sz);

        st.push(0);
        left[0] = 0;

        rep(i, 1, sz)
        {
            while (!st.empty() && v[i] <= v[st.top()])
            {
                st.pop();
            }
            if (st.empty())
            {
                left[i] = 0;
            }
            else
            {
                left[i] = st.top() + 1;
            }

            st.push(i);
        }
        // rep(i, 0, sz) cout << left[i] << ' ';
        // cout << endl;
        while (!st.empty())
            st.pop();
        st.push(sz - 1);
        right[sz - 1] = sz - 1;
        for (int i = sz - 2; i >= 0; i--)
        {
            while (!st.empty() && v[st.top()] >= v[i])
            {
                st.pop();
            }
            if (st.empty())
                right[i] = sz - 1;
            else
                right[i] = st.top() - 1;
            st.push(i);
        }
        // rep(i, 0, sz) cout << right[i] << ' ';cout<<endl;
        int hg = -1;

        rep(i, 0, sz)
        {
            hg = max(hg, (right[i] - left[i] + 1) * v[i]);
        }
        cout << hg << endl;
    }
    return 0;
}
