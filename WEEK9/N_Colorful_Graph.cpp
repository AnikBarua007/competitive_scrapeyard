#include <bits/stdc++.h>
using namespace std;

// #define dhruto                        \
//     ios_base::sync_with_stdio(false); \
//     cin.tie(NULL);

// #define ll long long int
// #define endl '\n'
// #define rep(i, a, b) for (int i = (int)a; i < (int)b; i++)
// #define repll(i, a, b) for (long long int i = (long long int)a; i < (long long int)b; i++)

int main()
{
    //dhruto;

    int n, m;
    cin >> n >> m;

    vector<int> colors(n + 1);

    for (int i = 1; i <= n; i++)
        cin >> colors[i];

    vector<vector<int>> graph(n + 1);

    int ma = -1;
    int index = -1;

    while (m--)
    {
        int a, b;
        cin >> a >> b;

        graph[a].push_back(b);
        graph[b].push_back(a); // Assuming the graph is undirected
        

        // Do not update ma and index here
    }
    // Update ma and index after processing all edges
    for (int i = 1; i <= n; i++)
    {
        if (graph[i].size() >= ma)
        {
            ma = graph[i].size();
            index = i;
        }
    }
    cout << index << endl;
    return 0;
}
