#include <stdio.h>

void main()
{

    // Create a C Program to read 3 integer values, find the largest among them
    int a,b,c;
    printf("enter the first number :");
    scanf("%d",&a);
    printf("enter the second number :");
    scanf("%d",&b);
    printf("enter the third number :");
    scanf("%d",&c);
    if(a>b & a>c)
    {
         printf("%d is greater than %d and %d",a,b,c);
    }

    else if(b>a & b>c)
    {
         printf("%d is greater than %d and %d",b,a,c);
    }
    else
    {
        printf("%d is greater than %d and %d",c,a,b);
    }

}
