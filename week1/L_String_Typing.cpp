#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
int main(){
    string s;
    cin>>s;
    s.erase(remove(s.begin(),s.end(),'>'),s.end());
    s.erase(remove(s.begin(),s.end(),'<'),s.end());
   
    vector<char>tags;
  
    for(int i=0;i<s.size();i++){
        if(s[i]=='/'){
            for(int s=0;s<(tags.size()-1)*2;s++){
                cout<<' ';
            }
        tags.pop_back();
        i++;
        


        cout<<'<'<<'/'<<s[i]<<'>'<<endl;

        }
        else{
           
            tags.push_back(s[i]);
             for(int s=0;s<(tags.size()-1)*2;s++){
                cout<<' ';
            }
            cout<<'<'<<s[i]<<'>'<<endl;
        }
    }
    
    return 0;
}