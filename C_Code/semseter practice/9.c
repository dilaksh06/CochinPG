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
void insert(int k)
{
    struct node *temp,*q;
    q=start;
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
 q=start;
 if(start==NULL)
 {
     printf("link list is empty\n");
     return;
 }
 while(q!=NULL)
 {
     printf("%d ->",q->data);
     q=q->link;
 }
 printf(" NULL\n");
}

void search(int k)
{
    struct node *q;
    q=start;
    if (start==NULL)
    {
        printf("list is empty\n");
        return;
    }
    while(q->link!=NULL)
    {
        if(q->data==k)
        {
            printf("yes it is exit in the list\n");
            return;
        }
        q=q->link;
    }
}

void ins_at_beg(int k)
{
    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node));
    if(temp==NULL)
    {
        printf("memory allocation is failed\n");
        return;
    }
    if(start==NULL)
    {
        create(k);
        return;

    }
    temp->data=k;
    temp->link=start;
    start=temp;
}

void replace_data(int pos,int k)
{
    struct node *temp,*q;
    temp=(struct node *)malloc(sizeof(struct node));
    if(temp==NULL)
    {
        printf("memory allocation is failed\n");
        return;
    }
    if(start==NULL)
    {
        printf("list is empty");
        return;
    }
    q=start;
    for(int i=1;i<pos;i++)
    {
        q=q->link;
    }
    q->data=k;
}

void insert_pos(int pos, int k)
{
    struct node *temp,*q;
    temp=(struct node *)malloc(sizeof(struct node));
    if(temp==NULL)
    {
        printf("memory allocation is failed\n");
        return;
    }
    if(start==NULL)
    {
        printf("list is empty");
        return;
    }
    temp->data=k;
    q=start;

    for(int i=1;i<pos-1;i++)
    {
        q=q->link;
    }
    temp->link=q->link;
    q->link=temp;
    //free(temp);

}
void del_at_lst()
{
    struct node *temp;
    temp=start;
    if(start==NULL || start->link==NULL)
    {

        printf("either list is empty or initialized with only one node\n");
        return;
    }
    while(temp->link->link!=NULL)
    {
        temp=temp->link;
    }
    printf("last data %d is deleted successfully\n",temp->link->data);
    temp->link=NULL;

}

void main()
{
    printf("*************Link List Operation**************\n");
    printf("enter 1 to insert\nenter 2 to display\nenter 3 to delete\nenter 4 to search\nenter 5 to insert at beginning\n");
    printf("enter no 6 to insert at pos\nenter 7 to add data at positon\nenter 8 to del data a last pos\nenter to 10 exit\n");

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
            insert(data);
        }
        else if(choice==2)
        {
            printf("the values are respectively\n");
            display();
        }
        else if(choice==3)
        {
          del_at_lst();
        }
        else if(choice==4)
        {
            int data;
            printf("enter the value to search : ");
            scanf("%d",&data);
            search(data);
        }
        else if(choice==5)
        {
            int data;
            printf("enter the value need to add at the beginning : ");
            scanf("%d",&data);
            ins_at_beg(data);
        }
        else if(choice==6)
        {
            int pos,data;
            printf("enter the position : ");
            scanf("%d",&pos);
            printf("enter the data : ");
            scanf("%d",&data);
            insert_pos(pos,data);
        }
        else if(choice==7)
        {
            int pos,data;
            printf("enter the position : ");
            scanf("%d",&pos);
            printf("enter the data : ");
            scanf("%d",&data);
            insert_pos(pos,data);
        }
        else if(choice==8)
        {
            del_at_lst();

        }
        else
            {
                printf("invalid choice try again\n");
            }

    }
}
