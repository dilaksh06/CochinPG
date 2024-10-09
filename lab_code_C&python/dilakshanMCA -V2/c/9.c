#include <stdio.h>


int main() {
int *a,*b, c,d, sum;
printf("enter the first number: ");
scanf("%d",&c);
printf("enter the second number : ");
scanf("%d",&d);
a=&c;
b=&d;

printf ("the sum of  a and b is %d",*a+*b );
}

