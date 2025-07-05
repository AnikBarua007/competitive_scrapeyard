// Anik Barua .. 15.12.2023
#include <bits/stdc++.h>
using namespace std;
#define dhruto                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
const int ep = 1e-7;
const int size = 1e7 + 9;
#define ll long long int
#define endl '\n'
#define rep(i, a, b) for (int i = (int)a; i < (int)b; i++)
#define repll(i, a, b) for ((long long int)i = (long long int)a; i < (long long int)b; i++)
int main()
{

    int t;
    cin >> t;
    // priority_queue<int,vector<int>,greater<int>>pq;
    char x;
    int y;
    // vector__Approach
    //  deque <int>v;
    //  deque<int>max;
    //  int mx= 0 ;
    //  max[0]=-1;
    int cse = 1;
    while (t--)
    {

        printf("Case %d:\n", cse);
        int n, mx = 0, ip;
        stack<int> st;
        int op;
        cin >> op;

        while (op--)
        {
            scanf(" %c", &x);

            if (x == 'A')
            {
                scanf("%d", &y);
                if (y > mx)
                    mx = y;
                st.push(mx);
            }
            else if (x == 'Q')
            {
                if (st.empty())
                {
                    // mx = 0;
                    printf("Empty\n");
                }
                else
                {
                    printf("%d\n", st.top());
                }
            }
            else
            {
                if (!st.empty())
                {
                    st.pop();
                    if (!st.empty())
                    {
                        if (st.top() < mx)
                        {
                            mx = st.top();
                        }
                    }
                    else
                        mx = 0;
                }
            }
        }
        cse++;
    }
    return 0;
}
