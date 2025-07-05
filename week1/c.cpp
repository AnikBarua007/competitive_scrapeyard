#include <iostream>
using namespace std;
int main()
{
    string s, h = "heidi";
    cin >> s;
    
    if (s.size() <= h.size())
    {
        cout << "NO";
        return 0;
    }
    int start = 0;
    bool found = true;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'h')
            start = i;
        found = false;
        break;
    }
    if ( found == true )
    {
        cout << "NO";
        return 0;
    } 
    for (int i = 1; i < 5; i++)
    {
        for (int j = start; j < s.size(); j++)
        {
            if(s[j]==h[i]){
                found = true ;
                start = j+1;
                break; 
            }
        }
        if(found == false ){
            cout << "NO"<;
            return 0;
        }
    }
    cout<<"YES"<<endl;
}