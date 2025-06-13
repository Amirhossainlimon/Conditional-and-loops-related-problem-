#include<stdio.h>
int main(){
int a=0;
char name[20];
printf("Enter name\n");

scanf("%s",name);// >>>>>scanf("%s",&name); both valid

 for(int i=0; name[i]!='\0'; i++){ //a[]="Limon " a[]={'l','i','m','o','n','\0'};
            a++;
}
printf("The total character in you name %d",a);

return 0;

}
