#include<stdio.h>
void main()
{
float a,b,c,d,e,f,g,result;
printf("enter the value for a,b,c,d,e,f,g:\n");
scanf("%f %f %f %f %f %f %f", &a,&b,&c,&d,&e,&f,&g);
result=((a-(b/c)*d+e)*(f+g));
printf("the result of the expression is :%.2f\n",result);


}
