#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t; // Number of test cases
    cin >> t;

    while (t--) {
        int n; // Length of the array
        cin >> n;

        vector<int> a(n);
        int totalXOR = 0;

        // Read the array and compute total XOR
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            totalXOR ^= a[i]; // XOR all elements of the array
        }

        // Check if a valid `x` exists
        if (totalXOR == 0) {
            cout << 0 << endl; // If total XOR is 0, any x works; by convention, we output 0
        } else if (n % 2 == 1) {
            cout << totalXOR << endl; // If n is odd and total XOR is non-zero, x = totalXOR works
        } else {
            cout << -1 << endl; // If n is even and total XOR is non-zero, no x works
        }
    }

    return 0;
}
