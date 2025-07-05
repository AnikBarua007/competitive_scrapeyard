#include <bits/stdc++.h>
using namespace std;
#define dhruto                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
// const int ep = 1e-7;
// const int size = 1e7 + 9;
// #define ll long long int
#define rep(i, a, b) for (int i = (int)a; i < (int)b; i++)
bool check(vector<int> &v, int mid, int target)
{
    int li = v.size();
    int price = v[li - 1] + mid * li;
    //cout<<price<<endl;
    if (price > target)
        return false;
    return true;
}
int main()
{

    int n, k;
    cin >> n >> k;
    vector<int> vec(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }
    sort(vec.begin(), vec.end());
    int low = 1;
    int high = n;
    int result = 0;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (check(vec, mid, k))
        {
            low = mid + 1;
            result = mid;
        }
        else
            high = mid - 1;
    }
    cout << result <<' '<< vec[n - 1] + result * n << endl;
}