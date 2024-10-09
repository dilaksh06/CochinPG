#include <stdio.h>
void swap(int *n, int *p);

int main() {

int a,b;

printf("ebter the first number : ");
scanf("%d",&a);

printf("ebter the second number : ");
scanf("%d",&b);

printf("before swapping, the value of a is %d and b is %d\n",a,b);
swap(&a,&b);
printf("after swapping, the value of a is %d and b is %d",a,b);
return 0;
}

void swap(int *n, int *p)
{
    int temp;
    temp=*n;
    *n=*p;
    *p=temp;



}


