#include<stdio.h>
void main(){
    int n;
    printf("enter a number between 1 and 3 : ");
    scanf("%d",&n);
    switch(n){
        case(1):
            printf("you entered 1");
            break;
        case(2):
            printf("you entered 2");
            break;
        case(3):
            printf("you entered 3");
            break;
        default:
            printf("the number you entered is out of range");
    }
}

