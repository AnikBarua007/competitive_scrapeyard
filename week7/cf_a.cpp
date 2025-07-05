#include <bits/stdc++.h>
using namespace std;
#define dhruto                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
const int ep = 1e7;
#define size1 1000010
#define ll long long int
#define rep(i, a, b) for (int i = (int)a; i < (int)b; i++)

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n;
        cin >> s;

        int one = 0, zero = 0;

        // Use character literals '0' and '1' instead of integer literals 0 and 1
        rep(i, 0, n)
        {
            if (s[i] == '0') // Fix: Use character literal '0' instead of integer literal 0
                zero++;

            if (s[i] == '1') // Fix: Use character literal '1' instead of integer literal 1
                one++;
        }
        if(zero==0)cout<<"NO"<<endl;
        else if(one==0)cout<<"YES"<<endl;
        else{
            cout<<"YES"<<endl;
        }


        // int d = 0;

        // if (zero > one)
        // {
        //     cout << "YES" << endl;
        //     continue;
        // }
        // else
        // {
        //     rep(i, 1, n)
        //     {
        //         if (s[i] != s[i - 1])
        //         {
        //             d++;
        //         }
        //     }
        // }

        // zero += d;
        // // cout << zero << endl;

        // if (zero > one)
        // {
        //     cout << "YES" << endl;
        // }
        // else
        //     cout << "NO" << endl;
    }

    return 0; // Fix: Add a return statement at the end of the main function
}
