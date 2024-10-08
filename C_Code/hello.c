

#include <stdio.h>
int main()
{

    int year,amount;
    float rate=0.5,interst;
    printf("enter the princiole amoutn:");
    scanf("%d",&amount);
     printf("enter the number of year:");
    scanf("%d",&year);
    interst=(amount*rate)*year;
    printf("the interest for %d year is INR %.2f:",year,interst);
    return 0;
}
