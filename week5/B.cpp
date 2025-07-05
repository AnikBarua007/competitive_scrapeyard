#include <iostream>
#include <vector>
using namespace std;
#define rep(i, a, b) for (int i = (int)a; i < (int)b; i++)
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k, q;
    cin >> n >> k >> q;
    vector<int> v(200000);
    vector<int> cal(200000);
    while (n--)
    {
        int a, b;
        cin >> a >> b;
        v[a]++;
        v[b + 1]--;
    }
    rep(i, 1, 200001)
    {
        v[i] += v[i - 1];
    }
    // rep(i,1,200001){
    //     v[i]=v[i-1] + (v[i]>=k?1:0);
    // }
    rep(i, 1, 200001)
    {
        if (v[i] >= k)
        {
            cal[i]++;
        }
    }
    rep(i, 1, 200001)
    {
        cal[i] += cal[i - 1];
    }
    while (q--)
    {
        int a, b, c = 0;
        cin >> a >> b;
        cout << cal[b] -cal[a - 1] << endl;
    }
    return 0;
}