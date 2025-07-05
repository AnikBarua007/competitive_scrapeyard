#include<iostream>//precompiled header files
using namespace std;
#define endl '\n'
int main(){

    string s;
    cin>>s;
    int t=0;
    for(int i=0;i<s.size();i++){
      
        if(s[i]>=65 && s[i]<='Z'){
           ++t; 
        }
        
    }
    cout<<++t;
    return 0;
}