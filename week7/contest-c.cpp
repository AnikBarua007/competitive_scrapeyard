// Anik Barua 28.11.2023
#include <bits/stdc++.h>
using namespace std;
#define dhruto                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
const int ep = 1e7;
#define size1 1000010
#define ll long long int
#define rep(i, a, b) for (int i = (int)a; i < (int)b; i++)
int main(){
    int n,k;
    cin>>n>>k;
    vector<int>v(n);
    rep(i,0,n){
        cin>>v[i];
    }
    int first = v[0];
    rep(i,1,n){
        if((first+v[i])%k==0){
            
        }
    }
    return 0;
}
class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        vector<int>diffs;
        for(int i=1;i<nums.size();i++){
            diffs.push_back(abs(nums[i]-nums[i-1]));
        }
        sort(diffs.begin(),diffs.end());
        int t=0;
        
        int fr=0;
        for(int i=0;i<diffs.size();i++){
            t+=diffs[i];
            if(t<=k)fr++;
            else break;
        }
        cout<<fr<<endl;
    }
};