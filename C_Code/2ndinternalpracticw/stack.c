#include <stdio.h>
#include<stdlib.h>
#define MAX 5

int rear=-1;
int stack[MAX];
int isFull()
{
  return rear==MAX-1;
}

int isEmpty()
{
    return rear==-1;

}

void create(int k)
{
    if (isFull())
    {
        printf("the stack is overflow\n");
    }else
    {
        rear++;
        stack[rear]=k;
        printf("the data %d is added at the position %d\n",k,rear);
    }
}
void dle()
{
    if(isEmpty())
    {
        printf("the stack is underflow\n");
        return;
    }else{
        int value=stack[rear];
        printf("the data %d is deleted from the index position %d\n",value,rear);
        rear--;
    }
}

void main()
{
    printf("enter 1 to add data :\n");
    printf("enter 2 to delete data :\n");

   while(1)
   {
       int choice;
       printf("enter the choice :");
       scanf("%d",&choice);
       if(choice==1)
       {
           if(isFull()){
            printf("the stack is overflow\n");

           }else
           {
           int value;
           printf("enter the value :" );
           scanf("%d",&value);
           create(value);
           }
       }
       else if(choice==2)
       {
            dle();
       }
   }
}
