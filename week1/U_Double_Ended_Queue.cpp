#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    int count = 1; // Initialize the test case counter

    while (t--) {
        int n, m;
        cin >> n >> m;
        deque<int> d;
        int size = 0;
        cout << "Case " << count++ << ":" << endl;

        for (int i = 0; i < m; i++) {
            string s;
            cin >> s;

            if (s == "pushLeft" || s == "pushRight") {
                int num;
                cin >> num;
                if (size >= n) {
                    cout << "The queue is full" << endl;
                } else {
                    if (s == "pushLeft") {
                        cout << "Pushed in left: " << num << endl;
                        d.push_front(num);
                    } else {
                        cout << "Pushed in right: " << num << endl;
                        d.push_back(num);
                    }
                    size++;
                }
            } else if (s == "popLeft" || s == "popRight") {
                if (size > 0) {
                    if (s == "popLeft") {
                        cout << "Popped from left: " << d.front() << endl;
                        d.pop_front();
                    } else {
                        cout << "Popped from right: " << d.back() << endl;
                        d.pop_back();
                    }
                    size--;
                } else {
                    cout << "The queue is empty" << endl;
                }
            }
        }
    }

    return 0;
}
