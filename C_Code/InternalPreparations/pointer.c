#include<stdio.h>>
void main(){
    int integer;
    float flt;
    int *i;
    float *j;
    printf("enter 2 numbers : ");
    scanf("%d%f",&integer,&flt);
    i=&integer;
    j=&flt;
    printf("the assigned value for the pointer i and j are : %d, %.2f",*i,*j);



}



