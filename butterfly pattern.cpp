
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    // Upper half
    for (int i = 1; i <= n; i++) {
        // Left triangle
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }

        // Middle spaces
        int spaces = 2 * (n - i);
        for (int j = 1; j <= spaces; j++) {
            cout << " ";
        }

        // Right triangle
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }

        cout << endl;
    }

    // Lower half (excluding the middle row)
    for (int i = n - 1; i >= 1; i--) {
        // Left triangle
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }

        // Middle spaces
        int spaces = 2 * (n - i);
        for (int j = 1; j <= spaces; j++) {
            cout << " ";
        }

        // Right triangle
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}

