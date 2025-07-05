// Anik Barua 10.23.2022
#include <bits/stdc++.h>
using namespace std;
#define dhruto                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

#define size1 10000000
int last_non_neg_fact[10000];
#define rep(i, a, b) for (int i = (int)a; i < (int)b; i++)
// vector of pairs fuck
void fact_last(int n){
    int ans=1;
    for(int i=1;i<=n;i++){
         ans=ans*i;
        while(ans%10==0){
            ans/=10;
        }
        ans%=100000;
        last_non_neg_fact[i]=ans%10;
    }
}
int main(){
    fact_last(10000);
    int n;while(cin>>n){
        printf("%5d -> %d\n",n,last_non_neg_fact[n]);
    }
}