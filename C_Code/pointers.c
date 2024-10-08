

#include <stdio.h>
int main()
{

    int *a,b;
    printf("enter a umber : ");
    scanf("%d",&b);

    a=&b;
    printf("the memory address allocated for p is : %d",a);
    printf("the value exist in pointer a is %d",*a);;
    return 0;
}
