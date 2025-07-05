#include <bits/stdc++.h>
using namespace std;
int main()
{
    // vector<int> v;
    // int t;
    // cin >> t;
    // int n = t;
    // wNhile (t--)
    // {
    //     int test;
    //     cin >> test;
    //     v.push_back(test);
    // }
    // int sum;
    // cin >> sum;
    // int left = 0, right = 0;
    // int total = 0;
    // int length = 0;
    // for (right; right < n; right++)
    // {
    //     total += v[right];
    //     while (total >= sum)
    //     {
    //         total -= v[left];
    //         left++;
    //     }
    //     length = max(length, right - left + 1);
    // }
    // cout << length
    vector<int> v = {1, 2, 3, 9, 15, 4, 5, 8};
    int x ;x=15;
    int left =0 , right;
    int sum = 0 ;
    int sub = 0 ;
    for(right =0 ; right <= v.size(); right++){
        sum+=v[right];
        while(sum >= x){
            ++left;
            sum -=v[left];
        }
        sub = max(right - left + 1 , sub );
    } 
    // i know how to solve but cant wrtie the code -->
    //1 debugging 2 reapproach 3 seek help 
    cout<<sub;
    return 0;
}