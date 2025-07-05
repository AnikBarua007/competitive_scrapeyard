#include <bits/stdc++.h>
using namespace std;
#define dhruto                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
int main()
{
    dhruto;
    string a, b;
    cin >> a >> b;
    int s = a.length(), s1 = b.length();
    while (s > 0 || s1 > 0)
    {
        if (a[s - 1] == b[s1 - 1])
        {
            s--;
            s1--;
        }
        else
        {
            break;
        }
    }
   
    cout << s + s1 << endl;
    return 0;
}