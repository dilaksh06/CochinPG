#include <stdio.h>


int main() {
int n,fact=1;
printf("enter a number to calculate factorial : ");
scanf("%d",&n);
for (int i=1;i<=n;i++){

fact=fact*i;


}
printf("the factorial is %d",fact);
return 0;
}
