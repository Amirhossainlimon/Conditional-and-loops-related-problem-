#include <iostream>
using namespace std;
int main() {
    int T;
    cin >> T;
    for (int t = 0; t < T; t++) {
        char A, B, C, D, E, F;
        cin >> A >> B >> C >> D >> E >> F;

        for (int i = 0; i < 4; i++) {
            if ((i==0 && A == 'W' && B == 'W' && C == 'W')||(i==1 && B == 'W' && C == 'W' && D == 'W')||(i==2 && C == 'W' && D == 'W' && E == 'W') ||
                (i==3 && D == 'W' && E == 'W' && F == 'W')){

                cout << "YES" << endl;
                break;
            }

            else{
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}

