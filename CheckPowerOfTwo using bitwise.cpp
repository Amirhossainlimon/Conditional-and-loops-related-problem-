#include <bits/stdc++.h>
using namespace std;


int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if(n > 0 && (n & (n - 1)) == 0){
        cout << n << " is a Power of 2" << endl;
    }
    else{
        cout << n << " is NOT a Power of 2" << endl;
    }

    return 0;
}

