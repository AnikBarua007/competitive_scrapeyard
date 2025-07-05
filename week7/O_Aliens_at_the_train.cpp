// Anik Barua .. 12.21.2023
#include <bits/stdc++.h>
using namespace std;
#define dhruto                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
const int ep = 1e-7;
const int sz = 1e7 + 9;
#define ll long long int
#define rep(i, a, b) for (int i = (int)a; i < (int)b; i++)
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        rep(i, 0, n) cin >> v[i];

        int low =  0 , sum = 0 ;
        int sz = 0 ; int ans = 0 ; 
        for(int right = 0 ; right < n ; right++){
            sum += v[right];
            //amar_naam_anik
            // ans = sum;
            while(sum>=k){

                sum-=v[low];
                // ans= max(ans,sum); 
                low++;
            }
            // ans = min(ans , sum);
            if(sz<right-low+1) {
                ans = sum ;
            }
            if(sz==right-low+1 )
            sz = max(sz,right-low+1);
        }
        cout<<ans<<' '<<sz;
    }
    return 0;
}