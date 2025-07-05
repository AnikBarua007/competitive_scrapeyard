// Anik Barua .. 15.12.2023
#include <bits/stdc++.h>
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
void printv(vector<int> &v)
{
    rep(i, 0, v.size()) cout << v[i] << ' ';
    cout << endl;
}
// void solve1()
// {
// }
bool add(string ma[], string k)
{
    int h, hash, nhash;
    h = 0;
    for (int i = 0; i < k.length(); i++)
    {
        h += int(k[i]) * (i + 1);
    }
    hash = (h * 19) % 101;
    if (ma[hash] == k)
        return false;
    else
    {
        for (int j = 1; j <= 19; j++)
        {
            nhash = (hash + (23 * j) + (j * j)) % 101;
            if (ma[nhash] == k)
            {
                return false;
            }
        }
    }
    if (ma[hash] == "")
    {
        ma[hash] = k;
        return true;
    }
    for (int j = 1; j <= 19; j++)
    {
        nhash = (hash + (j * j) + (23 * j)) % 101;
        if (ma[nhash] == "")
        {
            ma[nhash] = k;
            return true;
        }
    }
    return false;
}
bool del(string ma[], string k)
{
    rep(i, 0, 101)
    {
        if (ma[i] == k)
        {
            ma[i] = "";
            return true;
        }
    }
    return false;
}
void solve()
{
    int q;
    cin >> q;
    int noe = 0;
    string ma[101];
    string op, k;
    for (int i = 0; i < q; i++)

    {
        cin >> op;
        if (op.substr(0, 3) == "ADD")
        {
            k = op.substr(4);
            if (add(ma, k))
            {
                noe++;
            }
        }
        else if (op.substr(0, 3) == "DEL")
        {
            k = op.substr(4);
            if (del(ma, k))
            {
                noe--;
            }
        }
    }
    cout << noe << endl;
    for (int i = 0; i < 101; i++)
    {
        if (ma[i] != "")
        {
            cout << i << ":" << ma[i] << endl;
        }
    }
    return;
}

int main()
{
    dhruto;
    int t;
    cin >> t;
    while (t--)
    {
        solve();
        // solve1();
    }
    return 0;
}
