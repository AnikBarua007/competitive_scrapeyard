//Anik Barua 10.23.2022
#include <bits/stdc++.h>
using namespace std;
#define dhruto                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define rep(i, a, b) for (int i = (int)a; i < (int)b; i++)
int main()
{
    int n;
    cin >> n;
    int v[n];
    rep(i, 0, n)
    {
        cin >> v[i];
    }
    rep(i, 1, n)
    {
        v[i] += v[i - 1];
    }
    int m;
    cin >> m;
    rep(i,0,m)
    {
        int temp;
        cin >> temp;
        cout<<(lower_bound(v,v+n,temp)-v)+1<<endl;
    }
    return 0;
}
