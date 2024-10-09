#include<stdio.h>
void sum(int *, int *,int *);
void main(){

    int a,b,c;
    printf("enter the first number : ");
    scanf("%d",&a);
    printf("enter the second number : ");
    scanf("%d",&b);
     printf("enter the third number : ");
    scanf("%d",&c);
    sum(&a,&b,&c);

}

void sum(int *x,int *y, int *z)
{
    printf("the sum of the three numbers are : %d", (*x+*y+*z));

}



