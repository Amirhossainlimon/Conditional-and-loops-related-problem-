#include<iostream>
#include<cmath>
 using namespace std;
 int main(){

 int n;
 cin>>n;
  int sum=0;;
 int x=n;
 while(n>0){
  int lastnumber=n%10;
   sum=sum+ pow(lastnumber,3);
   n=n/10;

 }
 if(x==sum){
    cout<<"Armstrong number";
 }
  else{
    cout<<"Not Armstrong number";
  }
 return 0;
 }
