#include <stdio.h>
#include <math.h>
#include <string.h>

int fact(int k)
{
    if(k==0)
    {
        return 1;
    }
    return k=k*fact(k-1);
}
void main()
{

int n,s=1;

printf("enter the number for factorial : ");

scanf("%d",&n);

printf("the factorial %d \n",fact(n));
for (int i=1;i<n+1;i++)
{
    s=s*i;
}

if(n<0)
{
    printf("1");
}
printf("%d",s);

}
