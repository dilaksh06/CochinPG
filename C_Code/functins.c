


#include <stdio.h>
int add(int, int);
void main()
{
int a,b;
printf("enter the first number :");
scanf("%d",&a);
printf("enter the second number :");
scanf("%d",&b);
printf("the sum of a+b is =%d",add(a,b));

}
int add(int a, int b){

return (a+b);
}
