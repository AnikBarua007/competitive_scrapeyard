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
    dhruto;
    int t;
    cin >> t;
    while (t--)
    {
        ll n ;
        cin>> n ; 
        int c =0 ;
        while (n % 5 == 0)
        {
            n = (4 * n) / 5;
            c++;
        }
        while (n % 3 == 0)
        {
            n = ((2 * n) / 3);
            c++;
        }

        while(n%2==0){
            n = (n/2);
            c++;
        } 
        
        if(n==1)cout<< c <<endl;
        else cout << -1 <<endl ; 
    }
    return 0;
}
