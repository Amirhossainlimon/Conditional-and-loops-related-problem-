#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {  // Controls the number of rows
        for (char j = 0; j < i; j++) {  // Controls the characters
            cout << j;
        }
        cout << endl;
    }

    return 0;
}
