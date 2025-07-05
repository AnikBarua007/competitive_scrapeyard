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
        int n, k ;
        cin>>n>>k;
        vector<int>v(n);vector<int>vec(n);
        rep(i,0,n)cin>>v[i];
        rep(i, 0, n) cin >> vec[i];
        int first = 0;
        k--; 
        int second  = 0 ;
        int total =  v[0] ;
        while(k--){
            if(v[first+1]<vec[first]){
                total += vec[first];
            }
            else if (vec[first]<v[first+1]){
                first++;
                total+=v[first];
            }
            else if (vec[first]==v[first+1]){
                if(v[first+2]>vec[first])
                {
                    first++;
                    total += v[first];
                }
                else {
                    total += vec[first];
                }
            }

        }cout<<total<<endl;
    }
    return 0;
}