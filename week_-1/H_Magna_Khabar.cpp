
#include <bits/stdc++.h>
using namespace std;
#define byebye return 0
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define endl "\n"
#define rep(i, a, b) for (int i = (int)a; i < (int)b; i++)
int main()
{
    int n, q;
    cin >> n >> q;
    cin.ignore();
    vector<string> hrml;
    rep(i, 0, n)
    {
        string temp;
        getline(cin, temp);
        hrml.push_back(temp);
    }
    vector<string> query;
    rep(i, 0, q)
    {
        string temp;
        cin >> temp;
        query.push_back(temp);
    }
    vector<string> tags;
    map<string, string> ma;
    rep(i, 0, n)
    {
        string temp;
        temp = hrml[i];
        temp.erase(remove(temp.begin(), temp.end(), "\""), temp.end());
        temp.erase(remove(temp.begin(), temp.end(), '>'), temp.end());
        if (temp.substr(0, 2) == "</")
        {
            tags.pop_back();
        }
        else
        {
            stringstream s1;
            s1.str("");
            s1 << temp;
            string t1, p1, v1;
            char ch;
            s1 >> ch >> t1 >> p1 >> ch >> v1;
            string temp1 = "";
            if (tags.size() > 0)
            {
                temp1 = *tags.rbegin();
                temp1 = temp1 + "." + t1;
            }
            else
                temp1 = t1;
            tags.push_back(temp1);
            ma[*tags.rbegin() + "~" + p1] = v1;
            while (s1)
            {
                s1 >> p1 >> ch >> v1;
                ma[*tags.rbegin() + "~" + p1] = v1;
            }
        }
    }
    rep(i, 0, q)
    {
        // -->  
    }
    return 0;
}