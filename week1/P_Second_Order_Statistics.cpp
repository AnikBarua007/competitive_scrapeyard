#include <bits/stdc++.h>
using namespace std;
#define dhruto                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
int main()
{
    dhruto;
    set<int> s;
    int a;

    int n;
    cin >> n;
    
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        s.insert(a);
    }
    if (s.size() == 1)
    {
        cout << "NO" << endl;
        return 0;
    }
    set<int>::iterator it = s.begin();
    it++;
    cout << *it << endl;
    return 0;
}