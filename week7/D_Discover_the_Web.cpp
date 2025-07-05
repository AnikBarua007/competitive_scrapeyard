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
int main()
{
    dhruto;
    int t;
    cin >> t;
    stack<string> forw;
    stack<string> backw;
    backw.push("http://www.lightoj.com/");
    string current;
    int cs = 0 ;
    while (t--)
    {
        stack<string> forw;
        stack<string> backw;
        backw.push("http://www.lightoj.com/");
        cout<<"Case "<<++cs<<":"<<endl;
        string s1;
        string s2;
        while (cin >> s1 && s1 != "QUIT")
        {

            if (s1 == "VISIT")
            {
                cin >> s2;
                cout << s2 << endl;
                // if(backw.empty() )
                // backw.pop();
                // if(!forw.empty()
                // {
                //     backw
                // }
                backw.push(s2);
                //while(!forw.empty())forw.pop();
                 forw= stack<string>();
                //    forw.clear();
            }
            else if (s1 == "FORWARD")
            {

                if (forw.empty())
                {
                    cout << "Ignored" << endl;
                    continue;
                }

                else
                {
                    cout << forw.top() << endl;
                    backw.push(forw.top());
                    forw.pop();
                }
            }
            else if (s1 == "BACK")
            {
                forw.push(backw.top());
                backw.pop();
                if (backw.empty())
                {
                    cout << "Ignored" << endl;
                    backw.push(forw.top());
                    forw.pop();
                    continue;
                }
                else
                {
                    
                    cout << backw.top() << endl;
                }
            }
        }
    }
    return 0;
}
