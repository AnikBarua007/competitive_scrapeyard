 // Anik Barua 15.11.2023
#include <iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
#define dhruto                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
const int ep = 1e6+7;
#define size1 1000010
#define rep(i, a, b) for (int i = (int)a; i < (int)b; i++)

double precal[ep];


int main(){
    precal[0]=0;
    for(int i=1;i<ep;i++){
        precal[i]=precal[i-1]+log(i);
    }    
    int t;cin>>t;
    int n,base;
    for(int i=1;i<=t;i++){
        cin>>n>>base;
        int digits = precal[n]/log(base)+1;
        cout<<"Case "<<i<<": "<<digits<<endl;
    }
    return 0;
}