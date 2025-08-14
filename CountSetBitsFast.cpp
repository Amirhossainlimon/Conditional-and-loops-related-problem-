#include <iostream>
using namespace std;

// Function to count set bits using Brian Kernighan's Algorithm
int CountSetBits(int n) {
    int count = 0;
    while (n > 0) {
        n = n & (n - 1); // Remove the last set bit
        count++;
    }
    return count;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int ones = CountSetBits(num);
    cout << "Number of 1s in binary of " << num << " is: " << ones << endl;

    return 0;
}
