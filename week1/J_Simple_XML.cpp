#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
int main(){
    string a;
    cin>>a;
    a.erase(remove(a.begin(),a.end(),'>'),a.end());
    a.erase(remove(a.begin(),a.end(),'<'),a.end());
    // cout<<a;
    vector<char>tags;
    // for(int i=0;i<a.size();i++){       
    //}
    // int spaces=0;
    for(int i=0;i<a.size();i++){
        if(a[i]=='/'){
            for(int s=0;s<(tags.size()-1)*2;s++){
                cout<<' ';
            }
        tags.pop_back();
        i++;
        
        // for(int i=0;i<)

        cout<<'<'<<'/'<<a[i]<<'>'<<endl;

        }
        else{
           
            tags.push_back(a[i]);
             for(int s=0;s<(tags.size()-1)*2;s++){
                cout<<' ';
            }
            cout<<'<'<<a[i]<<'>'<<endl;
        }
    }
    return 0;
}