#include <iostream>
using namespace std;
int main() {
   int a,b,c,x;
   cin>>a>>b>>c;
   x = max(a, max(b, c));
   cout<<"Big number is "<<x;
    return 0;
}
