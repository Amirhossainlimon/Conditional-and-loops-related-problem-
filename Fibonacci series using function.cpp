#include <iostream>
using namespace std;
void fib(int n){
 int x=0;
 int y=1;
 int z;
 for(int i=1; i<=n;i++){
     cout<<x<<endl;
     z=x+y;
     x=y;
     y=z;
 }
}
int main() {
   int n;
   cout<<"Enter number of lines: ";
   cin>>n;
   fib(n);

    return 0;
}
