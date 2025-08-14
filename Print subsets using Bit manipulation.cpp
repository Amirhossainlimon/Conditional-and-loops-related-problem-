#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> set(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> set[i];
    }

    cout << "All subsets:\n";

    // Total subsets = 2^n
    for (int i = 0; i < (1 << n); i++) {

        for (int j = 0; j < n; j++) {
            // Check if j-th bit is set
            if (i & (1 << j)) {
                cout << set[j] << ",";
            }
        }
        cout <<endl;
    }

    return 0;
}
