// Anik Barua 15.11.2023
#include <iostream>
#include <vector>
using namespace std;
#define dhruto                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
const int ep = 1e6;
#define size1 1000010
#define rep(i, a, b) for (int i = (int)a; i < (int)b; i++)
int f_precal[ep];
int factor(int base, int num)
{
    int c = 0;
    while (base > 0)
    {
        c += base / num;
        base /= num;
    }
    return c;
}
int bin_factor(int base, int num)
{
    int c = 0;
    while (base % num == 0)
    {
        c++;
        base /= num;
    }
    return c;
}
int main()
{
    // dhruto;
    int t;
    cin >> t;
    int cnt = 0;

    while (t--)
    {
        int n, r, p, q;
        cin >> n >> r >> p >> q;
        int n_two = factor(n, 2), n_r_two = factor((n - r), 2), r_two = factor(r, 2);
        int n_five = factor(n, 5), n_r_five = factor((n - r), 5), r_five = factor(r, 5);
        int x = bin_factor(p, 2) * q;
        int y = bin_factor(p, 5) * q;
        int answer = min(n_two - r_two - n_r_two + x, n_five - r_five - n_r_five + y);
        printf("Case %d: %d\n", ++cnt, answer);
    }
    return 0;
}