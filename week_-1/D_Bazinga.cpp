#include <iostream>
#include<map>
#include<vector>

using namespace std;
const int sz = 1e5 + 1;
#define dhruto                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
const int ep = 1e-7;
const int size = 1e7 + 9;
#define ll long long int
#define endl '\n'
#define rep(i, a, b) for (int i = (int)a; i < (int)b; i++)
#define repll(i, a, b) for ((long long int)i = (long long int)a; i < (long long int)b; i++)

int main()
{
    dhruto;
    int n;
    cin >> n;
    vector<int> v(n, 0);
    map<int, int> ma;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        ma[v[i]]++;
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int j;
        for (j = 0; j <= 32; j++)
        {
            int check = (1 << j) - v[i];
            if (check != v[i] && ma[check] >= 1)
                break;
            else if (check == v[i] && ma[check] > 1)
                break;
        }
        if (j > 32)
            count++;
    }
    cout << count << endl;
    return 0;
}
