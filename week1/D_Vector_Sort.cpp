
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v;
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int temp;
        cin>>temp;
        v.push_back(temp);
    }    
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<' ';
    }
    return 0;
}
    