#include <stdio.h>

void main()
{
    int a[10];
    int n;
    printf("enter the limit for the numbers");
    scanf("%d",&n);
    for (int i = 0; i <n; i++)
    {
        printf("enter the number : \n");
        scanf("%d",&a[i]);

    }
    printf("enter a number to be checked");
    int x;
    scanf("%d",&x);
    for (int i = 0; i <n; i++)
    {
        if(x==a[i])
        {
            printf("the number exist in the array at the position %d",i);
            break;
        }
    }

}
