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
    int num, num2;
    stack<unsigned int> q;
    while (t--)
    {

        cin >> num;
        if (num == 1)
        {
            cin >> num2;
            q.push(num2);
        }
        else if (num == 2)
        {
            if (!q.empty())
            {
                q.pop();
            }
        }
        else
        {
            if (!q.empty())
            {
                cout << q.top()
                     << endl;
            }
            else
            {
                cout << "Empty!" << endl;
            }
        }
    }
    return 0;
}