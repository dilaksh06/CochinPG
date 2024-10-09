#include<stdio.h>
void main(){
 int n,rem,reverse=0;
 printf("enter a number : ");
 scanf("%d",&n);
   printf("user entered number is :%d\n",n);
 while(n!=0){
    rem=n%10;
    reverse=reverse*10+rem;
    n/=10;
    }

    printf("Reverse of the user entered number: %d",reverse);

}
