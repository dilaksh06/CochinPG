#include<stdio.h>
void main(){
    float x,y;
    printf("enter two numbers : ");
    scanf("%f%f",&x,&y);
    printf("the value of x and y before type casting : %d and %d", x,y);
    printf("the value of x and y after type casting : %.2f and %.2f", (float)x,(float)y);
}
