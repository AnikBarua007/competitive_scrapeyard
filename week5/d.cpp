#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = (int)a; i < (int)b; i++)
#include <iostream>
#include <vector>
using namespace std;
#define dhruto                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
int binary_search(int *array, int left, int right, int key)
{
    if (left > right)
        return -1;
    int mid = (left + right) / 2;
    if (array[mid] == key)
    {
        if (mid == 0 || array[mid - 1] != key)
            return mid;
        return binary_search(array, left, mid - 1, key);
    }
    if (array[mid] > key)
        return binary_search(array, left, mid - 1, key);
    return binary_search(array, mid + 1, right, key);
}
int main()
{
    // dhruto;
    int n, q;
    scanf ("%d %d", &n, &q);
    int v[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &v[i]);
    while (q--)
    {
        int temp;
        scanf("%d", &temp);
        cout << binary_search(v, 0,n-1,temp) << '\n';
    }
    return 0;
}
int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        int v[n]
        while (q--)
        {
            int l, r, val;
            cin >> l >> r >> val;
            v[l] += val;
            v[r + 1] -= val;
        }
        rep(i,1,n){
            v[i]+=v[i-1];
        }
        cin >> q;
        while (q--)
        {
            int t;cin>>t;
            cout<<v[t]<<endl;
        }
        cout<<binary_search()
    }
    return 0;
}