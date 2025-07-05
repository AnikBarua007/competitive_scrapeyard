// Anik Barua 15.11.2023
#include <iostream>
#include<vector>
using namespace std;
#define dhruto                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define ep 1e-7
#define size1 1000010
#define rep(i, a, b) for (int i = (int)a; i < (int)b; i++)
vector<long long int> ifp;
vector<bool> primes(size1);
void sieve()
{

    primes[1] = true;
    for (int i = 2; i * i <= size1; i++)
    {
        if (primes[i] != true)
        {
            for (int j = i * i; j <= size1; j += i)
            {
                primes[j] = true;
            }
        }
    }
    ifp.push_back(2);
    for (int i = 3; i < size1; i+=2)
    {
        if (primes[i] == false)
        {
            ifp.push_back(i);
        }
    }
}
int main()
{
    dhruto;
    sieve();
    long long int cs = 0;
    int r;
    cin >> r;
    // cout << ifp[1];
    // cout<<ifp[10];
    while (r--)
    {
        
        long long int n;
        cin >> n;
         int sum = 1;
        for (long long int i = 0; i < size1 && ifp[i] * ifp[i] <= n; i++)
        {
           int c = 0;
            if (n % ifp[i] == 0)
            {
                while (n % ifp[i]==0)
                {
                    n /= ifp[i];
                    c++;
                    if(n==0|| n==1)break;
                }
                sum *= c+1;
            }
            
        }
        if (n !=1)
            sum*=2;
         printf("Case %lld: %d\n",++cs,sum-1);
    }
    return 0;
}