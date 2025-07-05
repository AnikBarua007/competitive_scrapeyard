#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string n;
        cin>>n;
        
        int strting=0, ending=0;
        for (int i = 0; i < n.size(); i++)
        {
            if (n[i] == '1')
            {
                strting = i;
                break;
            }
        }
        for (int i = n .size()- 1; i >= 0; i--)
        {
            if (n[i] == '1')
            {
                ending = i;
                break;
            }
        }int flag=0;
        for (int i = strting; i < ending; i++)
        {
            if(n[i]=='0'){
                flag++;
            }
        }
        cout<<flag<<endl;
        cin.ignore();
    }
    return 0;
}