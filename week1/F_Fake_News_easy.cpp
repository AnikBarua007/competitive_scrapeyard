#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    const std::string h="heidi";
    string s;
    cin >> s;
    bool fake=false;
    long ind=0;
    for (long p = 0; p < s.size(); p++)
    {
        if (s[p] == h[ind])
        {
            ++ind;
        }
        if (ind >= h.size())
        {
            fake = true;
            break;
        }
    }

    std::cout << (fake ? "YES" : "NO") << std::endl;

    return 0;
}