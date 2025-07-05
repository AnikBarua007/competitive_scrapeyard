#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main(){
   ios_base:: sync_with_stdio(false),cin.tie(NULL);
    vector<int>array(10);
    for(int i=0;i<10;i++){
        array[i]=0;
    }
    int event;
    cin>>event;
    for(int i=0;i<event;i++){
        char a;
        cin>>a;
        if(a=='L'){
            for(int j=0;j<=9;j++){
                if(array[j]==0){
                    array[j]=1;
                    break;
                }
            }
        }
        else if(a=='R'){
            for(int j=9;j>=0;j--){
                if(array[j]==0){
                    array[j]=1;
                    break;
                }
            }
        }
        else{
            int room_no=(int)(a)-48;

            array[room_no]=0;
            // cout<<room_no<<endl;
        }
    }
    for(int i=0;i<10;i++){
        cout<<array[i];
    }
    cout<<endl;
    return 0;
}