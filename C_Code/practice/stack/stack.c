#include <stdio.h>
#include <stdlib.h>
#define MAX 5

int stack[MAX];
int top=-1;

int isEmpty()
{
    return top==-1;
}

int isFull()
{
    return ( top==MAX-1);
}


void push(int value)
{
    if (isFull())
    {
        printf("the stack is overflow, sorry for the inconvenience caused by us\n");
    }else
    {
        top++;
        stack[top]=value;
        printf("the value %d is added successfully at the position %d\n", value,top+1);
        if(top==MAX-1)
        {
            printf("the last value added to the stack successfully\n");
        }

    }
}
void pop()
{
    if(isEmpty())
    {
        printf("the stack is underflow so, try to add some values and try again :)\n");
    }else
    {
        int value=stack[top];
        printf("the value %d is deleted successfully in the position %d\n",value,top+1);
        stack[top--];
    }
}

void display()
{
    for (int i=top;i>-1;i--)
    {
        printf ("%d\n",stack[i]);
    }

}

void main()
{
     printf("enter 1 to add value in stack\nenter 2 to delete value in stack\nenter 3 display value in stack\n");
 while(1)
 {

     printf ("enter your choice : ");
     int i;
     scanf("%d",&i);
     if (i==1)
     {
        int i;
        printf("enter a value to add in stack : ");
        scanf("%d",&i);
        push(i);
     }else if(i==2)
     {
        pop();
     }else if(i==3)
     {
        display();
     }else
     {
         printf("entered wrong input try again\n");
     }
 }
}
