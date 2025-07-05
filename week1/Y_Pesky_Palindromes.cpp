#include <bits/stdc++.h>
using namespace std;
#define dhruto                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
bool is_plaindromic_string(string a)
{
    int check = a.size() - 1 / 2;
    for (int i = 0, j = a.size() - 1; i <= check; i++, j--)
    {
        if (a[i] != a[j])
            return false;
    }
    return true;
}

int gcd(int a, int b)
{

    return (b == 0) ? a : gcd(b, a % b);
}

int main()
{
    dhruto;
    int count = 0;
    string a;
    int check_each = 1;
    while (cin >> a)
    {
        int p_c = 0;
        set<char> sets;
        for (int i = 0; i < a.size(); i++)
        {
            sets.insert(a[i]);
        }
        for (int check = 1; check <= a.size(); check++)
        {
            for (int i = 0; i < a.size() - check; i++)
            {
                string r = a.substr(i, check + 1);
                cout << r << endl;
                if (is_plaindromic_string(r) == true)
                {

                    p_c++;
                }
            }
        }
        fflush(stdin);
        cout << "The string" << ' ' << "'" << a << "'" << ' ' << "contains " << p_c + sets.size() << " palindromes." << endl;
        // cout<<(p_c+sets.size())<<endl;
    }

    return 0;
}