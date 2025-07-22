
#include <iostream>
using namespace std;

int main() {
    int R1,R2,D1,D2,s1,s2;
    cin >> R1>>R2;
    cin>>D1>>D2;
    s1=R1+D1;
    s2=R2+D2;

    if (s1>s2) {
        cout <<"Dominater"<<endl;
    }
    else{
        cout<<"Everule"<<endl;
    }

    return 0;
}
