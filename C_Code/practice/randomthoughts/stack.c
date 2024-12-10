
#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int top=-1;
int stack[5];

int isEmpty()
    {
        return top==-1;
    }

int isFull()
    {
        return top==MAX-1;
    }

void create(int k)
{



    if (isFull())
    {
        printf("stack is overflow\n");
        return;
    }else
    {
        top++;
        stack[top]=k;
        printf("the value %d is successfully added at the position %d\n",k,top+1);
        if (top==MAX-1)
            printf("the final data is added in the stack and further data will not be added in stack as it is overflow\n");

    }
}

void _delete_data()
{
    if(isEmpty())
    {
        printf("stack is underflow \n");

    }else
    {
        int value=stack[top];
        printf("the value %d is deleted successfully from the position %d \n",value,top+1);
        top--;
    }
}
void main()
{
 printf("please enter the following :\n");
 printf("enter 1 to add data in stack :\n");
 printf("enter 2 to delete data in stack :\n");
 printf("enter 3 to display data in stack :\m");
 printf("enter 4 to exit the program :\n");
 while (1)
 {
     int n;
     printf("enter the choice : ");
     scanf("%d",&n);

     if(n==1)
     {
         int data;
         printf("enter the value to add in stack : ");
         scanf("%d",&data);
         create(data);

     }
     else if(n==2)
     {
         _delete_data();

     }else if(n==3)
     {

     }else if(n==4)
     {

     }else
     {
         printf("wrong input try again :\n");
     }
 }

}
