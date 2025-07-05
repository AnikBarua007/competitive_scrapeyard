
                // Anik Barua 3,12.2023
                #include <bits/stdc++.h>
                using namespace std;
                #define dhruto                        \
                    ios_base::sync_with_stdio(false); \
                    cin.tie(NULL);
                const int ep = 1e7;
                #define size1 1000010
                #define ll long long int
                #define rep(i, a, b) for (int i = (int)a; i < (int)b; i++)
int week(long long int n, long long int p, long long int l, long long int t)
{
    long int unlock = (n / 7) + 1;
    long long int done = 0;
     int days = 0;
    while (p > done)
    {
        done += (t * 2);
        days++;
        // if(days* 7+1>=n)break;
    }
    if(p==done){
       return  days++;
    }else 
    return (days);
}
bool chec_weeks(long long int n, long long int p, long long int l, long long int t)
{
    long long int unlock = (n / 7) + 1;
    long long int done = 0;
    long long int days = 0;
    while (p > done)
    {
        done += (t * 2);
        days++;
        // if(days* 7+1>=n)break;
    }
    if (days > unlock)
        return false;
    return true;
}
bool check_days(long long int n, long long int p, long long int l, long long int t)
{
    long long int days = (p / l);
    if (days > n)
        return false;
    return true;
}
int day(long long int n, long long int p, long long int l, long long int t)
{

    long long  int days = (p / l);
   //cout<<days<<endl;
    if(p%l==0)
    return days;
    else return --days;
}
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        long long int n, p, l, t;
        cin >> n >> p >> l >> t;
        if (chec_weeks(n, p, l, t) == false && check_days(n, p, l, t) == false)
        {
            cout << 0 << endl;
        }
        else
            cout << n - min(day(n, p, l, t), week(n, p, l, t)) << endl;
    }

    return 0;
}