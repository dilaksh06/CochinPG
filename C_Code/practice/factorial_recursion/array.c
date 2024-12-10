#include<stdio.h>
int fact(int);

int fact(int data)
{
   if(data!=0)
   {
       return(data*fact(data-1));
   }
}
void main()
{

    int n;
    printf("enter a number to find factorial :\n");
    scanf("%d",&n);
    printf("%d",fact(n));

}
