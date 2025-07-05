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
int main()
{
    dhruto;
    int t;
    cin >> t;
    int cs = 1;
    while (t--)
    {
        cout<<"Case "<<cs++<<": ";
        long long int a  , b ;
        cin>>a>>b;
        cout<<(a*b)/2;
        cout<<endl;
    }
    return 0;
}
