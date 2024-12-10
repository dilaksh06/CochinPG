#include <stdio.h>
#include <stdlib.h> // For malloc
#include <stdbool.h>
#define MAX 5
int queue[MAX];
int rear=-1,front=-1;

void add_value(int value)
{

    if (rear==MAX-1)
    {

       printf("queue is overflow\n");
    }else
    {
         rear++;
        queue[rear]=value;
        printf("we have successfully added the %d value to the queue at the position %d\n",value, rear+1);

    }
}

void delete_value()
{
    if(rear==-1 || front >rear)
    {
        printf("queue is on underflow\n");
    }else
    {
        queue[front++];
        printf("the element %d at the position %d is deleted successfully\n",queue[front],front);
    }
}

void display()
{
    for(int i=front;i<rear+1;i++)
    {
        printf("the value in %d position is %d \n",i,queue[i]);
    }
}

void main()
{

while (1)
    {
        int i;
        printf("press 1 to add element in the queue : \npress 2 display element in the queue :\npress 3 to delete element in the queue :\npress 4 to exit :\n");
        scanf("%d",&i);
        if (i==1)
        {
            int n;
            printf("enter the value to add in the queue \n");
            scanf("%d",&n);
            add_value(n);
        }else if(i==2)
        {
            display();
        }
        else if(i==3)
        {
           delete_value();
        }else if(i==4)
        {
            exit(0);
        }
        else
        {
            printf("invalid input and try again\n");
        }

    }
}
