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
#define repll(i, a, b) for (long long i = (long long)a; i < (long long)b; i++)
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n, c, t;
        cin >> n >> c >> t;
        vector<int> v(n);
        sort(v.begin(),v.end());
        rep(i, 0, n) {
            cin>>v[i];
        }
        // int low =  v[0],high = v[n-1];
        // while(low<=high){
        //     int mid = (high-low)/2 ;            
        // }
        int reach = -1 ;
        int time = 5 ;
        rep(i,0,n){
            //each position is fixed 
         rep(j,0,n){
            if(v[i]!=v[j] && v[j]-v[i]<c)
            {
                reach = max (reach , v[j]);
            }
         }
        }
        int high = 0 ; 
        
        cout<<reach<<endl ;
        
    }
    return 0;
}