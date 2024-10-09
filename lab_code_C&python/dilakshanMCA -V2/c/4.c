#include <stdio.h>

void main() {

int num,originalNum,remainder,result=0;
printf("enter a 3 digit integer:");
scanf("%d",&num);
originalNum=num;
while(originalNum!=0){
	remainder =originalNum %10;
	result+=remainder * remainder * remainder;
	originalNum/=10;
}
if (result== num)
{
printf("%d is an Amstrong number :", num);
}
else
{
printf("%d is not an Amstrong number :", num);
}



 
}
