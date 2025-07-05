#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

#define moye_moye                     \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define rep(i, a, b) for (int i = (int)a; i < (int)b; i++)
#define love 0

int main()
{
    moye_moye;
    long long int n;
    cin >> n;int arr[n];
    deque<int> dq(n,0);
    rep(i, 0, n)
    {
        cin >> arr[i];
        
    }int e=0;
    for(int i=n-1;i>=0;i--){    
        e+=arr[i];
        dq.push_front(e);

    }
    reverse(dq.begin(), dq.end());
    int q;
    cin >> q;
    while (q--)
    {
        int c;
        cin >> c;
        if (c == 2)
        {
            int x;
            cin >> x;
            dq.push_front(dq[0] + x);
        }
        else
        {
            int l, r;
            cin >> l >> r;
        
            cout << dq[l - 1] - dq[r] << endl;
        }
    }
    return love;
}
