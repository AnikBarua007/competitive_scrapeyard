// Anik Barua .. 15.12.2023
#include <bits/stdc++.h>
using namespace std;
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
    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> store;
    rep(i, 0, m)
    {
        int a, b;
        cin >> a >> b;
        store.push_back(make_pair(b, a));
    }
    sort(store.rbegin(), store.rend());
    // rep(i,0,m){
    //     cout<<
    // }
    int total = 0;
    int boxes = n;
    rep(i, 0, m)
    {
        if (boxes >= store[i].second)
        {
            boxes -= store[i].second ;
            total += store[i].first * store[i].second ;  
        }
        else {
            total += store[i].first * boxes;
            boxes -= boxes;
            
        }
        // cout<<boxes<<' ';
        if(boxes<=0)break;
    }
    cout<<total<<endl;
    return 0;
}
