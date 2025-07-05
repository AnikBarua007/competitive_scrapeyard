// Anik Barua 22.10.2023
#include <bits/stdc++.h>
using namespace std;
// #define rep(i, a, b) for (int i = (int)a; i < (int)b; i++)
#define moye_moye                     \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
//const int size = 1e7 + 9;
// bool primes[size];
// void sieve()
// {
//     memset(primes, true, size);
//     for (int i = 2; i * i <= size; i++)
//     {
//         if (primes[i] == true)
//         {
//             for (int j = i * i; j <= size; j += i)
//             {
//                 primes[j] = false;
//             }
//         }
//     }
// }
int main()
{
    moye_moye;
    // L meters -- c x
    // c==1 xi devide
    // 2 choose the mark xi piece print length
    int l, q;
    cin >> l >> q;
    set<int> s;
    s.insert({0, l});
    while (q--)
    {
        int c1, c2;
        cin >> c1 >> c2;
        if (c1 == 1)
        {
            s.insert(c2);
        }
        else
        {
            auto lb = s.lower_bound(c2);
            lb--;
            auto ub = s.upper_bound(c2);
            cout << *ub - *lb << endl;
        }
    }
    return 0;
}