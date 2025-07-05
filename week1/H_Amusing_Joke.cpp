#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    string first, second, third, main_arr;
    cin >> first >> second >> third;
    sort(third.begin(), third.end());
    main_arr = first + second;
    sort(main_arr.begin(), main_arr.end());
    if (main_arr.size() != third.size())
    {
        cout << "NO";
        return 0;
    }
    for (int i = 0; i < main_arr.size(); i++)
    {
        if (main_arr[i] != third[i])
        {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}