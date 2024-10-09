#include <stdio.h>
int fact (int);

int main() {

int n;

printf("enter a number for a factorial calculation : ");
scanf("%d",&n);
printf ("the factorial of the number %d is %d", n, fact(n));
return 0;

}

int fact (int n){
if (n==0)
return 1;
else if(n<0){
printf ("enter a positive integer\n");
return 0;

}
else
return (n*fact(n-1));

}

