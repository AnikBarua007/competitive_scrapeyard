// Anik Barua .. 09.02.2024
#include <bits/stdc++.h>
using namespace std;

const int MAX_SIZE = 1e5 + 1;
#define FASTIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

const int EPSILON = 1e-7;
const int ARRAY_SIZE = 1e7 + 9;
#define ll long long int
#define endl '\n'

#define MAX_PRIME_CHECK 10000000
#define rep(i, a, b) for (int i = (int)a; i < (int)b; i++)

vector<bool> isComposite(MAX_PRIME_CHECK + 1);

void sieve()
{
    for (int i = 4; i <= MAX_PRIME_CHECK; i += 2)
    {
        isComposite[i] = true;
    }

    for (int i = 3; i * i <= MAX_PRIME_CHECK; i += 2)
    {
        if (!isComposite[i])
        {
            for (int j = i * i; j <= MAX_PRIME_CHECK; j += i)
            {
                isComposite[j] = true;
            }
        }
    }
}

int occurrenceCount[MAX_PRIME_CHECK + 1] = {0};
int cumulativeOccurrences[MAX_PRIME_CHECK + 1] = {0};

int main()
{
    FASTIO;
    sieve();

    int arraySize;
    cin >> arraySize;

    rep(i, 0, arraySize)
    {
        int temp;
        cin >> temp;
        occurrenceCount[temp]++;
    }

    for (int i = 2; i <= MAX_PRIME_CHECK; i++)
    {
        if (!isComposite[i])
        {
            for (int j = i; j <= MAX_PRIME_CHECK; j += i)
            {
                cumulativeOccurrences[i] += occurrenceCount[j];
            }
        }
    }

    for (int i = 1; i <= MAX_PRIME_CHECK; i++)
    {
        cumulativeOccurrences[i] += cumulativeOccurrences[i - 1];
    }

    int queries;
    cin >> queries;

    while (queries--)
    {
        int left, right;
        cin >> left >> right;

        if (right > MAX_PRIME_CHECK)
            right = MAX_PRIME_CHECK;

        if (left > MAX_PRIME_CHECK)
            cout << 0 << endl;
        else
            cout << cumulativeOccurrences[right] - cumulativeOccurrences[left - 1] << endl;
    }

    return 0;
}
