#include <iostream>
using namespace std;

int main() {
    int row, space, num, i, j;
    int totalRows = 5;

    for (i = 1; i <= totalRows; i++) {
        for (space = 1; space <= totalRows - i; space++) {
            cout << "  ";
        }

        num = i;
        for (j = 1; j <= i; j++) {
            cout << num << " ";
            num++;
        }

        num -= 2;
        for (j = 1; j < i; j++) {
            cout << num << " ";
            num--;
        }

        cout << endl;
    }

    return 0;
}

