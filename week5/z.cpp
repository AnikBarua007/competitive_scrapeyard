// C++ implementation for
// above approach
#include <bits/stdc++.h>
using namespace std;
 
// Function to find the Kth
// not divisible by N
void kthNonDivisible(int N, int K)
{
     
    // Lowest possible value
    int L = 1;
   
    // Highest possible value
    int H = INT_MAX;
   
    // To store the Kth non
    // divisible number of N
    int ans = 0;
 
    // Using binary search
    while (L <= H)
    {
         
        // Calculating mid value
        int mid = (L + H) / 2;
 
        // Sol would have the value
        // by subtracting all
        // multiples of n till mid
        int sol = mid - mid / N;
 
        // Check if sol is greater than k
        if (sol > K)
        {
           
            // H should be reduced to find
            // minimum possible value
            H = mid - 1;
        }
       
        // Check if sol is less than k
        // then L will be mid+1
        else if (sol < K)
        {
            L = mid + 1;
        }
       
        // Check if sol is equal to k
        else
        {
             
            // ans will be mid
            ans = mid;
           
            // H would be reduced to find any
            // more possible value
            H = mid - 1;
        }
        cout<<L <<' '<<H<<endl;
    }
   
    // Print the answer
    cout << ans;
}
 
// Driver Code
int main()
{
    int N = 3;
    int K = 7;
    // Function Call
    kthNonDivisible(N, K);
    return 0;
}