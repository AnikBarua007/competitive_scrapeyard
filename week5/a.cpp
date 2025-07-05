#include<iostream>
#include<vector>
using namespace std;
#define rep(i,a,b) for(int i=(int)a;i<(int)b;i++)
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int n;cin>>n;
    vector<int>v(n);
    rep(i,0,n){
        cin>>v[i];
    }
    for(int i=1;i<n;i++){
        v[i]=v[i]+v[i-1];
    }
    
    int q;
    cin>>q;
    while(q--){
        int l,r;cin>>l>>r;
        if(l==0){
            cout<<v[r]<<endl;
            continue;
        }
        cout<<v[r]-v[l-1]<<endl;
    }
    return 0;
}