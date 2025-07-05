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
void printv (vector<int>&v){
    rep(i,0,v.size())cout<<v[i]<<' ';
    cout<<endl; 
}
int main()
{
    dhruto;
    int n , k ; 
    cin>>n >> k ;
     vector<int> v; 
     for(int i =2 ; i*i <= n ; i++){
        if(n%i==0){
            while(n%i==0){
                v.push_back(i);
                n=n/i;
            }
        }
     }
     int ans = 1 ; 
     if(n>1)v.push_back(n);
     //printv(v);
     if(k>v.size()) cout<<-1<<endl;
     else {
        // cout<< v.front()<<' ';
        for(int i= 0 ; i <k-1; i++){
            cout<<v[i]<<' ';
        }
        for(int i = k -1  ; i<v.size();i++){
            ans *= v[i];
        }
        cout<< ans <<endl; 

     }
    return 0;
}
