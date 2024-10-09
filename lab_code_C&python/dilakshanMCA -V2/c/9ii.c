#include <stdio.h>


int main() {

int a,b;

printf("ebter the first number : ");
scanf("%d",&a);

printf("ebter the second number : ");
scanf("%d",&b);


printf(" the values of a and b before swapping %d %d\n", a, b);

int temp;

temp=a;
a=b;
b=temp;


printf(" the values of a and b before swapping %d %d", a, b);

return 0;
}

