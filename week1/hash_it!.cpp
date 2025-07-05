#include <bits/stdc++.h>
using namespace std;
#define dhruto                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
const int size = 101;
vector<string> hashmap(size);

int hashkey(string s)
{
    int total = 0;
    for (int i = 0; i < s.size(); i++)
    {
        total += (int)s[i] * (i + 1);
    }
    return (19 * total) % size;
}
int main()
{
    dhruto;
    int t;
    cin >> t;
    while (t--)
    {
        int n1;
        cin >> n1;
        while (n1--)
        {
            string s;
            cin >> s;
            if (s[0] == 'A')
            {
                s.erase(0, 4);

                int hkey = hashkey(s);
                if (s.empty())
                {
                    s = "*";
                }
                bool ignore = false;
                for (int i = 0; i < 101; i++)
                {

                    if (s.compare(hashmap[i]) == 0)
                    {
                        ignore = true;
                        break;
                    }
                }
                if (ignore == false)
                {
                    for (int i = 0; i <= 20; i++)
                    {

                        int position = (hkey + i * i + 23 * i) % 101;
                        //  cout<<hashkey<<' '<<position;
                        if (hashmap[position] == "")
                        {
                            hashmap[position] = s;
                            break;
                        }
                    }
                }
            }
            else
            {
                s.erase(0, 4);
                if (s.empty())
                { for (int i = 0; i < 101; i++)
                    {

                        if (hashmap[i].compare("*")==0)
                        {
                            hashmap[i] = "";
                            break;
                        }
                    }

                }
                else
                {
                    for (int i = 0; i < 101; i++)
                    {

                        if (s.compare(hashmap[i]) == 0)
                        {
                            hashmap[i] = "";
                            break;
                        }
                    }
                }
            }
        }
        int count = 0;
        for (int i = 0; i < 101; i++)
        {
            if (!(hashmap[i].empty()))
            {
                count++;
            }
        }
        cout << count << endl;
        for (int i = 0; i < 101; i++)
        {
            if (hashmap[i] == "*")
            {
                cout << i << ":"
                     << "" << endl;
            }
            else if (!(hashmap[i].empty()))
            {
                cout << i << ":" << hashmap[i] << endl;
            }
        }
        for (int i = 0; i < 101; i++)
            hashmap[i].clear();
    }

    return 0;
}