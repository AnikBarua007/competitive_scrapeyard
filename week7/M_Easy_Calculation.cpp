// Anik Barua .. 15.12.2023
#include <bits/stdc++.h>
using namespace std;
#define dhruto                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
const int ep = 1e-7;
const int size = 1e7 + 9;
#define ll long long int
#define rep(i, a, b) for (int i = (int)a; i < (int)b; i++)
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        double  a, b,c ;cin>>a>>b>>c;
        double x1 , x2;
        x1 = -1 ;
        x2 = c/a ;
        int six  = 6 ;
        while(x2!=  x1 && six--){
            x1=x2;
            x2 = x1 - (a * x1 + b * sin(x1) - c) / (a + b * cos(x1));
        }
        //cout<<fixed<<setprecision(6)<<x2<<endl;
         printf ("%.6lf\n",x2);
    }
    return 0;
}