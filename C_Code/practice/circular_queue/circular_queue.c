#include<stdio.h>
#include <stdlib.h>

#define MAX 5
 int queue[MAX];
 int front=-1,rear=-1;

int isEmpty()
 {
     return front==-1;
 }

int isFull()
 {
    return (rear+1)%MAX==front;
 }

void add(int value)
{

    if (isFull())
    {
        printf("overflow\n");
        return;
    }
    if(isEmpty())
    {
        front=rear=0;
    }else
    {
        rear=(rear+1)%MAX;

    }
    queue[rear]=value;
    printf("value added successfully\n");

}
void _delete()
{

    if(isEmpty())
    {
        printf("under flow\n");
        return;
    }
    queue[front];
    if(rear==front)
    {
        front=rear=-1;
    }else
    {
        front=(front+1)%MAX;
    }
    printf("successfully deleted\n");


}

void display()
{
      printf("the values are : \n");
    for (int i =front;i<rear+1;i++)
    {
      printf("%d\n",queue[i]);
    }
}
void main()
{

printf("enter 1 to add\nenter 2 delete\nenter 3 to display\nenter 4 to exit\n");

while(1)
    {
        int i;
        printf("enter your choice : ");
        scanf("%d",&i);
        if(i==1)
        {
           int n;
           printf("enter the value : ");
           scanf("%d",&n);
           add(n);
        }
        else if(i==2)
        {
            _delete();
        }
        else if(i==3)
        {
            display();
        }
    }

}
