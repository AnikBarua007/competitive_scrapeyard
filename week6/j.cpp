#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        unsigned int num;
        cin >> num;
        if (num == 1)
        {
            cout << 1 << endl;
            continue;
        }
        vector<int> divs;
        for (int i = 9; i > 1; i--)
        {
            if (num % i == 0)
            {
                while (num % i == 0)
                {
                    num /= i;
                    divs.push_back(i);
                }
            }
        }
        sort(divs.begin(), divs.end());
        if (num > 1)
            cout << -1 << endl;
        else
        {
            for (int i = 0; i < divs.size(); i++)
            {
                cout << divs[i];
            }
            cout << endl;
        }
    }

    return 0;
}