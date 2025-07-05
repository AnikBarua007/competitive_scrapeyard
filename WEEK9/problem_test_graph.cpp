#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
const int N = 1e4;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int v, e;
        cin >> v >> e;
        //vector<int>graph[e];
        vector<vector<int>> graph(e);
        for (int i = 0; i < v; i++)
        {
            for (int j = 0; j <e; j++)
            {
                int test;
                cin >> test;
                if (test)
                {
                    graph[j].push_back(i);
                }
            }
        }
        bool nah = false;
        for (int i = 0; i <e; i++)
        {
            if (graph[i].size() != 2)
            {
                // cout << "No"<<endl;
                nah = true;
                break;
            }
        }
        if (nah == false)
        {
            set<pair<int, int>> v_p;
            for (int i = 0; i < e; i++)
            {
                v_p.insert(make_pair(graph[i][0], graph[i][1]));
            }
            if (v_p.size() == e)
            {
                cout << "Yes" << endl;
                continue;
            }
            else
                cout << "No" << endl;
        }
        else
            cout << "No" << endl;
    }
    return 0;
}