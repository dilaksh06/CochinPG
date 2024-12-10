#include<stdio.h>

void main()
{
    int array[50];
    int n;
    printf("enter the limit to add number in the array :\n");
    scanf("%d",&n);
    for (int i=0;i<n;i++)
    {
        printf("enter the %d number to add in the array : \n", i+1);
        scanf("%d",&array[i]);
    }
     for (int i=0;i<n;i++)
    {
        printf("the value in the %d positon is %d \n",i,array[i]);
    }
}
