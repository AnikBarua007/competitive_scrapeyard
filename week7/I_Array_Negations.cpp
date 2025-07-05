
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
    int t;
    cin >> t;
    while (t--)
    {
        int a, k ; 
        cin>>a>>k;
        multiset<int>v;
        ll sum = 0 ;
        rep(i,0,a){
            int ts;
            cin>>ts;
            v.insert(ts);
        }
        rep(i,0,k){
            int top = (*v.begin()) * (- 1); 
            v.erase(v.begin());
            v.insert(top);
        }for(auto it : v) sum+=it;
        cout<<sum<<endl;

    }
    return 0;
}

