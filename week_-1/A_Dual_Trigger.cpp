// Anik Barua .. 15.12.2023
#include <bits/stdc++.h>
using namespace std;
const int sz = 1e5 + 1;
#define dhruto                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
const int ep = 1e-7;
const int size = 1e7 + 9;
#define ll long long int
#define endl '\n'
#define rep(i, a, b) for (int i = (int)a; i < (int)b; i++)
#define repll(i, a, b) for ((long long int)i = (long long int)a; i < (long long int)b; i++)
void printv(vector<int> &v)
{
    rep(i, 0, v.size()) cout << v[i] << ' ';
    cout << endl;
}
void solve1()
{
}
void solve()
{

        int  s ; cin>> s; 
        vector<int>v(s);
        rep(i , 0 , s ) cin>>v[i];
        int f = 0 , l  = s-1 ;
        while(f+1<l ){
            if(v[f]==1){
                v[f]= 0 ; 
                while(v[l]==0 && l >= 0 && f+1<l){
                    l--;
                }
                if(l==0); else 
                v[l]= 0 ; 
            }
            f++;
        }
       // cout<< "asche"<<endl;
        rep ( i , 0 , s){
             if (v[i]==1) {
                cout<<"no"<<endl ; 
                return ;
             }
        }
        cout<<"YES"<<endl ;
    
}

int main()
{
    // dhruto;
    int t;
    cin >> t;
    while (t--)
    {
        solve();
        // solve1();
    }
    return 0;
}
