

#include <stdio.h>
int main()
{

    int *a,**b,c;
    printf("enter a number : ");
    scanf("%d",&b);


    a = &c;  // a points to c
    b = &a;

    printf("the memory address allocated for p is : %d",a);
    printf("the value exist in pointer a is %d",*a);
    printf ("the memory allcated for b is %e",b);
    printf("the value allocated for b is", **b);
    return 0;
}
