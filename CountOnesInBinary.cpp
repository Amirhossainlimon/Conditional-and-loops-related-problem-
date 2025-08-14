#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int count = 0;
    int temp = n;
    while (temp > 0) {
        count += temp & 1; // Check last bit
        temp = temp >> 1;  // Right shift
    }

    cout << "Number of 1s in binary of " << n << " is: " << count << endl;
    return 0;
}
