#include<stdio.h>

void main(){
    float store=1.0;
    int n;
    printf("enter a number to evaluate the expression 1+( 1/2) + (1/3) + (1/n) ... \n");
    scanf("%d",&n);
    for (int i=2;i<=n;i++)
    {
     store+=1.0/i;
    }
    printf("the result of the evaluation is %.2f",store);
}




