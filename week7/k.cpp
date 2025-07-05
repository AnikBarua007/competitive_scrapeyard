// Anik Barua 15.11.2023
#include <iostream>
#include <vector>
using namespace std;
#define dhruto                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
const int ep = 1e7;
#define size1 1000010
#define rep(i, a, b) for (int i = (int)a; i < (int)b; i++)

int main()
{
    int n;
    cin >> n;
    vector<int> v;
    bool found = false;
    for (int i = 5; i > 4; i++)
    {
        int t = i;
        int f = 0;
        while (t > 0)
        {
            f += t / 5;
            t /= 5;
        }
        if (f == n)
        {
            v.push_back(i);
            // cout << i << ' ';
            found = true;
        }

        if (f > n && found == false)
        {
            cout << 0;
            return 0;
        }
        if (found == true && f > n)
        {
            cout<<v.size()<<endl;
            for (int i = 0; i < v.size(); i++)
            {
                cout<<v[i]<<' ';
            }
            return 0 ;
        }
    }
    return 0;
}