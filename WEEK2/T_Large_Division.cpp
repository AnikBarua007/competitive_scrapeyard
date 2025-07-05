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
void printv(vector<int> &v)
{
    rep(i, 0, v.size()) cout << v[i] << ' ';
    cout << endl;
}
int main()
{
    // dhruto;
    int t;
    cin >> t;
    int cs = 0 ;
    while (t--)
    {
        string  s  ; 
        int div ; 
        cin>> s >> div ;
        int i = 0 ; 
        if(s[0]=='-' ) i= 1 ;
        if(div<0) div = abs(div) ; 
        ll reminder =0 ; 
        for(int j  = i ; j<s.size();j++){
            reminder = reminder*10+ (s[j]-'0');
            reminder %= div; 
        }
        if(reminder==0 )
            cout << "Case " << ++cs << ": divisible" << '\n';
        else
            cout << "Case " << ++cs << ": not divisible" << '\n';
    }
    return 0;
}
