#include <iostream>
using namespace std;

int main() {
    int rows = 6;

    for (int i = 0; i < rows; i++) {
        int num = 1;

        for (int space = 0; space < rows - i - 1; space++) {
            cout << " ";
        }

        for (int j = 0; j <= i; j++) {
            cout << num;
            if (j < i) {
                cout << " ";
            }
            num = num * (i - j) / (j + 1);
        }

        cout << endl;
    }

    return 0;
}


