// Anik Barua 15.11.2023
#include <iostream>
#include <map>

using namespace std;

int main() {
    int t;
    cin >> t;

    int count_case = 1;
    while (t--) {
        int n;
        cin >> n;

        cout << "Case " << count_case << ": " << n << " = ";
        count_case++;

        map<int, int> primes;
        for (int i = 2; i <= n; i++) {
            int num = i;
            for (int j = 2; j * j <= num; j++) {
                while (num % j == 0) {
                    primes[j]++;
                    num /= j;
                }
            }
            if (num > 1) {
                primes[num]++;
            }
        }

        for (auto it = primes.begin(); it != primes.end(); it++) {
            if (it != primes.begin()) {
                cout << " * ";
            }
            cout << it->first << " (" << it->second << ")";
        }
        cout << endl;
    }

    return 0;
}
