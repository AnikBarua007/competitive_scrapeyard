#include <bits/stdc++.h>
using namespace std;
#define dhruto                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
void max(int arr[], int n, int k)
{
    deque<int> d;
    for (int i = 0; i < n; i++)
    {
        for (; !d.empty() && arr[i] > d.back();)
            d.pop_back();
        d.push_back(arr[i]);
        if (i >= k && d.front() == arr[i - k])
            d.pop_front();
        if (i >= k - 1)
            printf(i < n - 1 ? "%d " : "%d\n", d.front());
    }
}
int main()
{
    dhruto;
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        max(arr, n, k);
    }
    return 0;
}