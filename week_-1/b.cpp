// Anik Barua .. 15.12.2023
#include <bits/stdc++.h>
using namespace std;
#define dhruto                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
// const int ep = 1e-7;
// const int size = 1e7 + 9;
// #define ll long long int
// #define endl '\n'
// #define rep(i, a, b) for (int i = (int)a; i < (int)b; i++)
// #define repll(i, a, b) for (long long int i = (long long int)a; i < (long long int)b; i++)
// void printv(vector<int> &v)
// {
//     rep(i, 0, v.size()) cout << v[i] << ' ';
//     cout << endl;
// }
int main()
{
    // dhruto;
    int a, b, c;
    int e, f, g;
    cin >> a >> b >> c;
    cin >> e >> f >> g;
    int  al =0  , bl = 0;
    if(a>e) al++ ; 
    else if (e>a) bl++;
    if (b>f)al++;
    else if (f>b) bl++;
    if(c>g)al++;
    else if (g>c) bl++;
    cout<< al<<' '<< bl <<endl;
    return 0;
}
