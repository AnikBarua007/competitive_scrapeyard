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
    // dhruto;
    // creat_zero();
    // cout << zero_array[6];
    int t;
    cin >> t;
    int cnt = 0;

    while (t--)
    {
        int count;
        cin >> count;
        if (count % 6 == 0)
        {
            cout << 5 * (count - count / 6)<<endl;
        }
        else
        {
            int baki = (count* 5) / 25;
            cout << 5 * count - (baki * 5)<<endl;
        }
    }
    return 0;
}