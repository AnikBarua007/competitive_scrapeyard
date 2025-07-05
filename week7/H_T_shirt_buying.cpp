// Anik Barua .. 15.12.2023
#include <bits/stdc++.h>
using namespace std;
#define dhruto                      \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);
// const int ep = 1e-7;
// const int size = 1e7 + 9;
#define ll long long int
#define endl '\n'
#define rep(i, a, b) for (int i = (int)a; i < (int)b; i++)
#define repll(i, a, b) for ((long long int)i = (long long int)a; i < (long long int)b; i++)
int main()
{
  dhruto;
  int size;
  cin >> size;
  vector<int> v1(size);
  vector<int> v2(size);
  vector<int> v3(size);

  // priority_queue <int,vector<int>,greater<int>>one;
  // priority_queue <int,vector<int>,greater<int>>two;
  // priority_queue <int,vector<int>,greater<int>>three;
  rep(i, 0, size)
  {
    cin >> v1[i];
  }
  rep(i, 0, size) cin >> v2[i];
  rep(i, 0, size) cin >> v3[i];
  // rep(i,0,size){
  // }
  int q;
  cin >> q;
  rep(i, 0, q)
  {
    int test;
    cin >> test;
    int min_indx = -1;
    int min = 1e9+1;
    rep(i, 0, size)
    {
      if ((v2[i] == test || v3[i] == test) && v1[i] != 1e12)
      {
        if (min > v1[i])
        {
          min_indx = i;
          min = v1[i];
        }
      }
    }
    if (min_indx == -1)
    {
      cout << -1 << ' ';
    }
    else
    {
      cout << v1[min_indx] << ' ';
      v1[min_indx] = 1e9+1;
    }
  }
  return 0;
}
