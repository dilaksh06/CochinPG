

#include <stdio.h>
void main()

{

int n[10],limit,i,sum=0,product=1;
printf("enter a limit :");
scanf("%d",&limit);
for (i=0;i<limit;i++){
    printf("enter the %d :",i+1);
    scanf("%d",&n[i]);
}
for (i=0;i<limit;i++){
    if(i==0 || i==(limit-1)){
        sum=sum+n[i];
        product=product*n[i];
    }
}
printf("the sum of the 1st and last number is %d:\n",sum);

printf("the product of the 1st and last number is %d",product);

}

