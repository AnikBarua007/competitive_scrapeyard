#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 998244353
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  ll A, B, C;
  cin >> A >> B >> C;
  // ll mod =998244353;
  ll suma = A * (A + 1) / 2;
  ll sumb = (B * (B + 1) / 2);
  ll sumc = ((C * (C + 1) / 2));

  ll sum = ((((suma % mod) * (sumb % mod)) % mod) * (sumc % mod)) % mod;
  cout << sum << endl;
  return 0;
}
