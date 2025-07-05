#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;int k=n;
    char arr[n],arr1[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(k%2==0){
            int p=(int)k/2-1;
            arr1[p]=arr[i];
        }
        else {
            int p=(int)k/2;
           arr1[p]=arr[i];
        }
        k--;
          for(int i=0;i<n;i++){
        cout<<arr1[i];
    }cout<<endl;
    }
     for(int i=0;i<n;i++){
        cout<<arr1[i];
    }
    return 0;
}