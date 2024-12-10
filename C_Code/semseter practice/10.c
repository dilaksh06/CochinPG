#include <stdio.h>
#include<stdlib.h>
#include <math.h>
#include <string.h>

struct node
{
    int data;
    struct node *link;
}*start=NULL;


void create(int k)
{

    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node));
    if(temp==NULL)
    {
        printf("memory allocation is failed\n");
        return;
    }
    temp->data=k;
    temp->link=NULL;
    if(start==NULL)
    {
        start=temp;
    }

}
void push(int k)
{
    struct node *temp,*q;
    q=start;
    temp=(struct node *)malloc(sizeof(struct node));
    if(temp==NULL)
    {
        printf("memory allocation is failed\n");
        return;
    }
    if(start==NULL)
    {
        create(k);
    }
    temp->data=k;
    temp->link=start;
    start=temp;


}

void display()
{
 struct node *q;
 q=start;
 if(start==NULL)
 {
     printf("link list is empty\n");
     return;
 }
 while(q->link!=NULL)
 {
     printf("%d\n",q->data);
     q=q->link;
 }
 printf("NULL\n");
}

void pop()
{
    struct node *q;
    q=start;
    if (start==NULL)
    {
        printf("list is empty\n");
        return;
    }
    printf("the data at the top %d is deleted successsfully\n",start->data);
    start=start->link;

}


void main()
{
    printf("*************Link List Operation**************\n");
    printf("enter 1 to push\nenter 2 to pop\nenter 3 to diplay\n");
    printf("\nenter to 10 exit\n");

    while(1)
    {
        int choice;
        printf("enter ur choice : ");
        scanf("%d",&choice);

        if(choice==1)
        {
            int data;
            printf("enter the value : ");
            scanf("%d",&data);
            push(data);
        }
        else if(choice==2)
        {

            pop();
        }


        else if(choice==3)
        {
            display();

        }
        else if(choice==4)
        {
            printf("exit\n");
            break;
        }
        else
            {
                printf("invalid choice try again\n");
            }

    }
}
