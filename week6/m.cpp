//Anik Barua.....1/11//2023
#include <bits/stdc++.h>
using namespace std;
#define dhruto                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
int main(){
    dhruto;
    long long int n;
    while(cin>>n){
        long long int total = 0;
        for(long long int i=2;i*i<=n;i++){
            if(n%i==0){
                while(n%i==0){
                    n/=i;
                    total+=i;
                }
            }
        }
        if(n>1)total+=n;
        cout<<total<<endl;
    }
    return 0;
}