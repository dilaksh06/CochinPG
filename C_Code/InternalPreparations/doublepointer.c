#include<stdio.h>>
void main(){
   int a,*p,**k;
   a=10;
   p=&a;
   k=&p;

   printf("value of a is %d\n",a);
   printf("value of p is %d\n",*p);
   printf("value of k is %d\n",**k);



}




