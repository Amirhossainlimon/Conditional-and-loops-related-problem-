#include<stdio.h>
int main(){

int num;
printf("Enter number");
scanf("%d",&num);

switch(num%2){
 case 0:
        printf("Even");
        break;
 case 1:
    printf("Odd");
    break;

default :
       printf("Invalid");
       break;

}

return 0;
}
