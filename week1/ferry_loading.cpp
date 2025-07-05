#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    deque<int>::iterator itr;
    
    while (t--)
    {
        int total_waiting = 0;
        deque<int> leftside;
        deque<int> rightside;
        int len, cars;
        cin >> len >> cars;
        len = len * 100;
        for(int i=0;i<cars;i++)
        {
            int size;
            string side;
            cin >> size >> side;
            total_waiting += size;
            if (side.compare("left")==0)
            {
                leftside.push_back(size);
            }
            else if (side.compare("right")==0)
            {
                rightside.push_back(size);
            }
        }
        // for (itr = leftside.begin(); itr != leftside.end(); itr++){
        //     cout<<*itr<<endl;
        // }
        int parhoyeche = 0, parhocce = 0, parhoisekoybar = 0;
        while (parhoyeche < total_waiting)
        {
            if (!leftside.empty())
            {
                for (itr = leftside.begin(); itr != leftside.end(); itr++)
                {
                    parhocce += *itr;
                    if (parhocce > len)
                    {
                        parhoisekoybar++;
                        break;
                    }
                    parhoyeche += *itr;
                    leftside.pop_front();
                } if (parhocce < len)
                    parhoisekoybar++;
                
                
            }
        //
                
        //
            if(!rightside.empty() && leftside.empty() && parhocce ==0)parhoisekoybar++;
            parhocce = 0;
            if (!rightside.empty())
            {
                for (itr = rightside.begin(); itr != rightside.end(); itr++)
                {
                    parhocce += *itr;
                    if (parhocce >= len)
                    {
                        parhoisekoybar++;
                        break;
                    }
                    parhoyeche += *itr;
                    rightside.pop_front();
                }
                if (parhocce < len)
                    parhoisekoybar++;
            }
           if(!leftside.empty() && rightside.empty() && parhocce==0)parhoisekoybar++;
            parhocce =0;
            
        }
        cout << parhoisekoybar << endl;
    }
    return 0;
}