#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str)
{
    // Complete this function
    vector<int> v;
    char ch;
    stringstream ss(str);
    while (ss >> ch)
    {
        if (ch == ',')
        {
            continue;
        }
        else
        {
            v.push_back((int)ch);
        }
    }
    return v;
}

int main()
{
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for (int i = 0; i < integers.size(); i++)
    {
        cout << integers[i] << "\n";
    }

    return 0;
}