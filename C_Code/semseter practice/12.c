#include <stdio.h>
#include<stdlib.h>
#include <math.h>
#include <string.h>

struct node
{
    int data;
    struct node *link;
}*front=NULL,*end=NULL;


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
    if(front==NULL)
    {
        printf("data added successfully\n");
        front=temp;
        end=front;
        return;
    }

}
void push(int k)
{
    struct node *temp,*q;
    q=end;
    temp=(struct node *)malloc(sizeof(struct node));
    temp->link=NULL;
    temp->data=k;

    if(temp==NULL)
    {
        printf("memory allocation is failed\n");
        return;
    }
    if(end==NULL)
    {
        create(k);
        return;
    }
    while(q->link!=NULL)
    {
        q=q->link;
    }
    q->link=temp;

}

void display()
{
 struct node *q;
 q=front;
 if(front==NULL)
 {
     printf("link list is empty\n");
     return;
 }
 while(q!=NULL)
 {
     printf("%d\n",q->data);
     q=q->link;
 }
 printf("NULL\n");
}

void pop() {
    struct node *q, *temp;

    // Check if the list is empty
    if (front == NULL) {
        printf("List is empty\n");
        return;
    }

    // If there's only one node in the list
    if (front->link == NULL) {
        printf("Last node %d is deleted successfully\n",front->data);
        free(front);  // Free the only node
        front = end = NULL;  // Update front and end to NULL

        return;
    }

    // Traverse the list to find the second-to-last node
    q = front;
    while (q->link != NULL) {
        temp = q;      // Keep track of the second-to-last node
        q = q->link;   // Move to the next node
    }
    printf("Last node value %d is deleted successfully\n",q->data);
    // `q` now points to the last node
    temp->link = NULL;  // Remove the last node from the list
    free(q);            // Free the memory of the last node
    end = temp;         // Update the `end` pointer

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
