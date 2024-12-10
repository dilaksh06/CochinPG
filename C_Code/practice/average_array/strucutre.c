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
int sum=0;
float total= n;
    for (int i = 0; i <n; i++)
    {
        sum+=a[i];
       // printf("%d\n", a[i]);
    }
 printf("sum is : %d",sum);
 printf("\naverage is : %.2f",sum/total);
}
