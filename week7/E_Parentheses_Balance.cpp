// Anik Barua .. 15.12.2023
#include <bits/stdc++.h>
using namespace std;
#define dhruto                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
const int ep = 1e-7;
const int size = 1e7 + 9;
#define ll long long int
#define endl '\n'
#define rep(i, a, b) for (int i = (int)a; i < (int)b; i++)
#define repll(i, a, b) for ((long long int)i = (long long int)a; i < (long long int)b; i++)

bool is_balanced_bracket_sequence_v2(const string &s)
{
    stack<char> stk;
    for (char c : s)
    {
        if (c == '(' || c == '[')
        {
            // c is an opening bracket
            stk.push(c);
        }
        else if (c == ')' || c == ']')
        {
            // c is a closing bracket
            if (stk.empty())
                return false;
            else
            {
                char top = stk.top();
                if (top == '(' && c != ')')
                    return false;

                if (top == '[' && c != ']')
                    return false;

                stk.pop();
            }
        }
    }
    return stk.empty();
}

int main()
{
    // dhruto;
    // binary_search(vector<int>&v,int element){
    //     //232232323  + 4 * 1 ....
    //     int mid  = (high + low  / 2) ;
    //     // mid = low + (high - low ) /  2 ;
    //     while(low<=high){
    //         if(mid<fweruifh) jforj

    //     }
    // }
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s;
        getline(cin,s);
        if (is_balanced_bracket_sequence_v2(s))
        {
            cout << "Yes" << endl;
        }
        else
            cout << "No" << endl;
    }
    return 0;
}
