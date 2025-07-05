// Anik Barua .. 15.12.2023
#include <bits/stdc++.h>
using namespace std;
#define dhruto                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
const int ep = 1e-7;
const int size = 1e7 + 9;
#define ll long long int
#define rep(i, a, b) for (int i = (int)a; i < (int)b; i++)
#define repll(i, a, b) for ((long long int)i = (long long int)a; i < (long long int)b; i++)
#define nl "\n" ;

int bin_s(int key, vector<int> &v)
{
    int low = 0, high = v.size()-1;
    while (low < high)
    {
        int mid = low + (high - low) / 2;
        if (v[mid] == key)
        {
            return mid;
        }
        else if (v[mid] > key)
        {
            low = mid + 1;
        }
        else
            high = mid - 1;
    }
    return -1;
}

int main()
{
    int n;
    cin >> n;
    int t;
    cin >> t;
    vector<int> v(n);
    rep(i, 0, n) cin >> v[i];
    while (t--)
    {
        int test;
        cin >> test;
        cout<<bin_s(test,v)<<endl;
    }
    return 0;
}
