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
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;cin>>n>>k;
        deque<int>v;
        deque<int>next;
        for(int i= n; i>=1;i--) v.push_back(i);    
            for(int j = 0 ;  j<k ;j++){
              int now = v.front();
              v.pop_front();
              next.push_front(now);
            }
        for(auto it : v)cout<<it<<' ';
        for(auto it : next ) cout << it <<' ';
        cout<<endl;
    }
    return 0;
}