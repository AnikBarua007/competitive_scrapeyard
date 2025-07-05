// Anik Barua 10.23.2022
#include <bits/stdc++.h>
using namespace std;
#define dhruto                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

#define size1 10000000
#define rep(i, a, b) for (int i = (int)a; i < (int)b; i++)
// vector of pairs fuck
int main(){
    int n;while(cin>>n){
        int c=0;
        for(int i=2;i*i<=n;i++){

            if(n%i==0){
                while(n%i==0){
                    n/=i;c++;
                }
            }
        }cout<<c<<endl;
    }
}