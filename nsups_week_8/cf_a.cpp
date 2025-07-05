// Anik Barua .. 15.12.2023
#include <bits/stdc++.h>
using namespace std;
#define dhruto                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
const int ep = 1e-7;
const int size = 1e7 + 9;
#define ll long long int
#define rep(i, a, b) for (int i = (int)a; i < (int)b; i++)
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int size = s.size();
        bool paisi = false;
        string a = "", b = "";
        // for (int i = 0; i < size; i++)
        // {

        //     if (s[i] == '0')
        //         a += s[i];
        //     if (s[i] != '0' && paisi == false)
        //     {
        //         paisi = true;
        //     }
        //     if (paisi == true)
        //     {
        //         b += s[i];
        //     }
        // }
        // int first = stoi(a);int second = stoi(b);
        // if (first > second)
        // {
        //     cout << -1 << endl;
        //     continue;
        // }
        // cout << first << ' ' << second << endl;
        int index_zero = 1;
        for (int i = size - 1; i > 0; i--)
        {
            if (s[i] != '0')
                index_zero = i;
        }
        for (int i = 0; i < index_zero; i++)
        {
            a += s[i];
        }
        for (int i = index_zero; i < size; i++)
        {
            b += s[i];
        }
        int first = stoi(a), second = stoi(b);
        if (first >= second)
        {
            cout << -1 << endl;
            continue;
        }
        cout << first << ' ' << second << endl;
    }
    return 0;
}