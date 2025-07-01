#include <iostream>
using namespace std;
int main() {
    int T;
    cin>>T;
    int c=1;
    for (int i = 1; i <= T;i++) {
        int a,b;
        cin >> a>>b;
        cout<<"Case "<<c<<":"<<a+b<<endl;
        c+=1;
    }
    return 0;
}
