// Anik Barua 3,12.2023
#include <bits/stdc++.h>
using namespace std;
#define dhruto                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
const int ep = 1e7;
#define size1 1000010
#define ll long long int
#define vi
#define pb push_back
//  making things there are some things making sesnse here

// #define vs vector<int> v
// typedef vector<int> vi;

#define rep(i, a, b) for (int i = (int)a; i < (int)b; i++)
// int bs(int x, vector<int> v, int size) //
// {                                      // iterative method
//     int low = 0, high = size - 1;
//     int mid;
//     while (low <= high)
//     {
//         mid = (low + high) / 2;
//         if (v[mid] == x)
//             return mid;
//         else if (v[mid] > x)
//         {
//             high = mid - 1;
//         }
//         else
//         {
//             low = mid + 1;
//         }
//     }
//     return -1;
// }

// int bs_recursive(vector<int> v, int x, int high, int low)
// {
//     if (low > high)
//     {
//         return -1;
//     }
//     int mid = (high + low) / 2;
//     if (v[mid] == x)
//     {
//         return mid;
//     }
//     else if (v[mid] > x)
//     {

//         return bs_recursive(v, x, mid - 1, low);
//     }
//     else if (v[mid] < x)
//         return bs_recursive(v, x, high, mid + 1);
// }

// int b_r(int low, int high, int x, vector<int> &v)
// {
//     if (high < low)
//         return -1;
//     int mid = (high + low) / 2;
//     if (v[mid] == x)
//         return mid;
//     if (v[mid] < x)
//     {
//         return b_r(mid + 1, high, x, v);
//     }
//     else
//     {
//         return b_r(low, mid - 1, x, v);
//     }
// }
// #define max(a,b) (a<b?b:a)
bool check(vector<int> &v, int dis, int cows)
{
    int cow = 1, last = v[0];
    int size = v.size();
    for (int i = 1; i < size; i++)
    {
        if (v[i] - last >= dis)
        {
            cow++;
            last = v[i];
        }
    }
    if (cow >= cows)
        return true;
    return false;
}
int main()
{

    dhruto;
    int t;
    cin >> t;
    while (t--)
    {
        int size, c;
        cin >> size >> c;
        vector<int> v(size);
        rep(i, 0, size)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        // int low = 1, high = v[size - 1] - v[0];
        // int res = 0;
        // while (low <= high)
        // {
        //     int mid = (low + high) / 2;
        //     if (check(v, mid, c))
        //     {
        //         res = mid;
        //         low = mid + 1;
        //     }
        //     else
        //         high = mid - 1;
        // }
        // cout << res;
        // solution hocce ekahen 1 ---- jhighest number in that array difference of it
        // 10000000000 2 billion as both are integers, 2 billon - bs - max run 32 log (2) (2 billion )
        int low = 1, high = v[size - 1] - v[0];
        int res  ;
        while (low <= high)
        {
            int mid = (low + high) / 2;
            if (check(v, mid, c))
            {
                res = mid;
                low = mid + 1;
            }
            else
                high = mid - 1;
        }
        cout << res << endl;
        // for (int i = 1; i <= v[size - 1] - v[0]; i++)
        // {
        //     if (check(v, i, c) == true)
        //     {
        //         continue;
        //     }
        //     else
        //     {
        //         cout<<i-1;
        //         break;
        //     }
        // }
    }
    return 0;
}