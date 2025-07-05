#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

#define moye_moye                     \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define rep(i, a, b) for (int i = (int)a; i < (int)b; i++)
#define love 0

int main()
{
    moye_moye;
    int n;
    cin >> n;
    vector<int> v(n);
    rep(i, 0, n)
    {
        cin >> v[i];
    }
    rep(i,1,n)v[i]+=v[i-1];
    int c=0;
    rep(i,0,n-1){
        if(v[i]==(v[n-1]-v[i])){
            c++;
        }
        
    } cout<<c;  
     
    return love;
}