#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> number;
    for (int i = 1; i < 5000; i++)
    {
        if (i < 10)
        {
            number.push_back(i);
        }
        else
        {
            int temp = i;
            vector<int> vector;
            while (temp != 0)
            {

                vector.push_back(temp % 10);
                temp /= 10;
            }
            for (int p = vector.size() - 1; p >= 0; p--)
            {
                number.push_back(vector[p]);
            }
        }
    }
    int t;
    cin >> t;
    cout << number[t - 1];

    return 0;
}