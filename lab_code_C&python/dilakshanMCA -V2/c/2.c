#include<stdio.h>
void main()
{
int n1,n2,n3;
printf("enter three different numbers:");
scanf("%d %d %d", &n1,&n2,&n3);
if (n1> n2 && n1>n3){
printf("%d  ia the largest number",n1);

}
if (n2>n1 && n2>n3){
printf("%d is the largets number",n2);

}
if (n3>n1 && n3>n2){
printf("%d is the largets number",n3);

}

}
