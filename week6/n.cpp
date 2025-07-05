//Anik Barua.....1/11//2023
#include <bits/stdc++.h>
using namespace std;
#define dhruto                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
int gcd (int a, int b){
    return (b==0)?a: gcd (b,a%b);
    // if(b==0)return a;
    // return gcd (b,a%b);
}
int main(){
    dhruto;
    int n;
    cin>>n;
    int total=n;
    int first;
    cin>>first;
    n-1;
    int num;
    int count =0;
    while(n--){
        cin>>num;
        if(gcd(first,num)==1){
            count++;first = num;
        }
    }
    cout<<total-count+1;
}