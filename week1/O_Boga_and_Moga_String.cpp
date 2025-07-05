#include <bits/stdc++.h>

using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;
    int size = a.size() + b.size(), str1 = 0, str2 = 0;
    char array[size + 1];
    for (int i = 1; i <= size; i++)
    {
        if (i % 2 == 0)
        {
            array[i] = b[str1];
            str1++;
        }
        else
        {
            array[i] = a[str2];
            str2++;
        }
    }
    for (int i = 1; i <= size; i++)
    {
        cout << array[i];
    }

    return 0;
}
