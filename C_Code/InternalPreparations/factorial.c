#include<stdio.h>
int fact(int);
void main(){
    int f,x;
    printf("Enter the number for factorial operation : ");
    scanf("%d",&x);
    f=fact(x);
    printf("the factorial of %d is %d",x,f);
}

int fact(int x)
{
    if(x==0){
        return(1);
    }else{

        return(x*fact(x-1));
    }

}
