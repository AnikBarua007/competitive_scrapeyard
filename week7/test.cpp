#include <iostream>
#include <cmath>
using namespace std;

// Function to calculate GCD
int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

// Function to check if it's possible to reach the destinations from a given point
bool canReachBoth(int x, int y, int p, int q, int a, int b) {
    int manhattanDistancePQ = abs(p - x) + abs(q - y);
    int manhattanDistanceAB = abs(a - x) + abs(b - y);
    
    int gcd_pq = gcd(abs(p), abs(q));
    int gcd_ab = gcd(abs(a), abs(b));

    return (manhattanDistancePQ % gcd_pq == 0) && (manhattanDistanceAB % gcd_ab == 0);
}

// Function to find the number of points from which both destinations can be reached
int countReachablePointsBoth(int p, int q, int a, int b, int maxX, int maxY) {
    int count = 0;

    for (int x = 0; x <= maxX; ++x) {
        for (int y = 0; y <= maxY; ++y) {
            if (canReachBoth(x, y, p, q, a, b)) {
                ++count;
            }
        }
    }

    return count;
}

int main() {
    int p, q, a, b, maxX, maxY;
    cin>>maxX >> maxY;
    cin >> p >> q ;
    cin>> a >> b ; 

    int result = countReachablePointsBoth(p, q, a, b, maxX, maxY);

    cout << result << endl;

    return 0;
}
