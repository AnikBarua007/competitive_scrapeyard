// Anik Barua.....1/11//2023
#include <bits/stdc++.h>
using namespace std;
#define dhruto                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

int main()
{
   // dhruto;
    int n;
    cin >> n;
    vector<int> v(1000005);
    vector<int>numbers(n);
    for (int i = 0; i < n; i++)
    {
        
        cin >> numbers[i];

        v[numbers[i]]++;
    }
    bool found = true;
    for (int i = 2; i < 1000005; i++)
    {
        int count = 0;
        for (int j = i; j < 1000005; j += i)
        {
            count += v[j];
        }
        if (count > 1)
            found = false;
    }int g = 0;
    for (int i = 0; i < n; i++)
    {
        g = __gcd(g, numbers[i]);
    }
    if (found == true)
    {
        cout << "pairwise coprime" << endl;
    }
    
   else  if (g == 1)
    {
        cout << "setwise coprime" << endl;
    }
    else
    {
        cout << "not coprime" << endl;
    }
}