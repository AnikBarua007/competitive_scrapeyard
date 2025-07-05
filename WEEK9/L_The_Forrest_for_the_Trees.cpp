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
bool cycle = false;
// bool visited[26];
bitset<26> visited;
int nh;
vector<bitset<26>> graph(26);
void dfs(int v, int parent)
{
    visited[v] = 1;
    // if (!cycle)
    //     return;//running dfs is much more 
        //time consuming than just just iterates of the arrays
        //cycle hole is a issue
        //is was literally shit 
    ++nh;
    for (int i = 0; i < 26; i++)
    {
        // if (visited[i] && i != parent)
        // {
        //     cycle = true;
        // }
        // if (!visited[i])
        //     dfs(i, v);

        if (graph[v][i] && i != parent)
        {
            if (visited[i])
                cycle = true;
            else
            {
                dfs(i, v);
            }
        }
    }
}
int main()
{
    // dhruto;
    int t;
    cin >> t;
    while (t--)
    {
        visited.reset();
        string s;
        rep(i, 0, 26)
        {
            graph[i].reset();
        }
        while (cin >> s && s[0] != '*')
        {
            graph[s[1] - 'A'][s[3] - 'A'] = 1;
            graph[s[3] - 'A'][s[1] - 'A'] = 1;
        }
        cin >> s;
        int tr = 0;
        int acorn = 0;
        int length = s.length();
        for (int i = 0; i < length; i += 2)
        {
            int j = s[i] - 'A';
            if (visited[j])
                continue;
            cycle = true;
            nh = 0;
            dfs(j, -1);
            if (nh == 1)
                acorn++;
            else if (cycle)
                ++tr;
        }
        cout << "There are " << tr << " tree(s) and " << acorn << " acorn(s).\n";
    }
///acron is harder than that there are some things there that can be sorted out from this man 
///god help us 
    return 0;
}
