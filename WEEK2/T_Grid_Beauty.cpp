#include <bits/stdc++.h>
using namespace std;
#define byebye return 0
int main()
{
    // grid g n rows and m coloums
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> g(n, vector<int>(m));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> g[i][j];
            }
            sort(g[i].begin(), g[i].end());
        }
        int count = 0;

        for (int i = 1; i < n; i++)
        {
            map<int, int> m1, m2;
            for (int j = 0; j < m; j++)
            {

                m1[g[i][j]]++;
            }
            for (int j = 0; j < m; j++)
            {
                m2[g[i - 1][j]]++;
            }
            for (map<int, int>::iterator it = m1.begin(); it != m1.end(); it++)
            {
                count += min(it->second, m2[it->first]);
            }
        }
        printf("%d\n", count);
    }

    byebye;
}