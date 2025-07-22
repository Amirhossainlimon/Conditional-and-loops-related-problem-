#include <iostream>
#include <string>
#include <algorithm>  // for reverse

using namespace std;

int main() {
    string n,name;
    cout << "Enter string\n";
    cin >> n;
    name = n;
    reverse(name.begin(), name.end());

    if (n == name) {
        cout << "YES" << endl;
    }
     else {
        cout << "NO" << endl;
    }

    return 0;
}
