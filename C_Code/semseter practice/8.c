#include <stdio.h>
#include <math.h>
#include <string.h>

void point(int *k,int *y)
{
    int temp;
    temp=*k;
    *k=*y;
    *y=temp;
}

void main()
{

//Do the following using pointers
//i) add two numbers
//ii) swap two numbers using user defined function
int *a,*b;
int c,d;
printf("enter the first number : ");
scanf("%d",&c);
printf("enter the second number : ");
scanf("%d",&d);
printf("the value of c and d before swap is %d, %d \n",c,d);
point(&c,&d);
printf("the value of c and d after swap is %d, %d \n",c,d);

a=&c;
b=&d;
int sum=*a+*b;
printf("the sum is %d",sum);
}
