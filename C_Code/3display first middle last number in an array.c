

#include <stdio.h>
void main()

{

int first,middle,last,limit,x[20],i;
printf("enter the odd number between 1 and 20:");
scanf("%d",&limit);
for(i=0;i<limit;i++){
    printf("enter the %d number : ",i+1);
    scanf("%d",&x[i]);
}
middle=(limit/2);

printf("the first number is %d\nthe middle number is %d\nthe last number is %d",x[0],x[middle],x[limit-1]);


}

