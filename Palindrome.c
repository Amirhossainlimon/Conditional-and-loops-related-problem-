#include<stdio.h>
#include<string.h>
 int main(){

 char n[100];
 printf("Enter name\n");
scanf("%s",&n);
   char name[100];
   strcpy(name,n);

   if(strcmp(n,strrev(name))==0){
    printf("Palindrome ");
   }
   else{
     printf(" Not Palindrome ");
   }


 return 0;
 }
