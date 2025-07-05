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
int main(){

    int t; cin>> t;
    while(t--){
        int size ; 
        cin>>size;
        vector<int>v(size);
        rep(i,0,size)cin>>v[i];
        stack<int>st;
        vector<int>left;
        vector<int>right;
        rep(i,0,size){
            if(st.empty()){
                left[i]=i;
                st.push(i);
            }
            else if(!st.empty()){
                if(v[i]>v[st.top()])
                {
                    left[i]=st.top()+1;
                }
                else{
                    while(v[st.top()]>=v[i]){
                        st.pop();
                    }
                    left[i]=st.top()+1;
                }
            }
            rep(i,0,size )cout<<left[i]<<' ';
        }
    }
    return 0;
}
