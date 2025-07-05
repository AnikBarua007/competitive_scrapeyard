// Anik Barua
// 9.21.2023 6:00 pm
#include <bits/stdc++.h>
using namespace std;
#define byebye return 0
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define endl "\n"

int main()
{
    // n integers
    // int k
    // k negations
    fast;
    int t;
    cin >> t;
    map<int, int> m;
    for (int i = 0; i < t; i++)
    {
        int val;
        cin >> val;
        m[val]++;
    }
    map<int, int>::iterator itnex = m.begin();
    itnex++;
    for (; itnex != m.end(); itnex++)
    {
        map<int, int>::iterator it = itnex;
        it--;
        // if(it->second==itnex->second){
        //     it->second=0;
        // }
        // else if ()
        if (it->second > itnex->second)
        {
            it->second = itnex->second - it->second;
        }
        else
        {
            it->second = 0;
        }
    }
    int total = 0;
    for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
    {
        total += it->second;
    }
    cout << total << endl;
    return 0;
}