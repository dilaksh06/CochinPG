#include <stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *link;
}*start=NULL;

void create(int k)
{
    struct node *temp,*q;
    temp=(struct node*)malloc(sizeof(struct node));
    if (temp==NULL)
    {
        printf("memory allocation is failed!");
        exit;
    }
    temp->data=k;
    temp->link=NULL;

    if(start==NULL)
    {
        start=temp;
        printf("value added successfully\n");
    }else
    {

        q=start;
        while(q->link!=NULL)
        {
            q=q->link;
        }
        q->link=temp;
        printf("value added successfully\n");
    }
}

void add_node_at_beg(int k)
{
    struct node *temp,*q;
    temp=(struct node *)malloc(sizeof(struct node));
    q=start;
    if (q==NULL)
    {
        printf("the linked list is empty try to do add operation\n");
        return;
    }
    else
    {
        temp->data=k;
        temp->link=start;
        start=temp;
        printf("the node is successfully added at the beginning\n");

    }



}

void del()
{
    struct node *q;
    if(start==NULL)
    {
        printf("the linked list is empty");
        return;
    }
    q=start;
    if(q->link==NULL)
    {
        start=NULL;
        printf("all node deleted successfully and initialized with start==NULL\n");

    }
    else
    {

        while(q->link->link!=NULL)
        {
            q=q->link;
        }
        q->link=NULL;
        printf("the last data was successfully deleted\n");

    }
}

void del_beg()
{
    struct node *temp;
    temp=start;
    if(start->link==NULL)
    {
        start=NULL;
        printf("all nodes are deleted and start is initialized with start=NULL\n");
    }
    else
    {

        start=temp->link;
        printf("successfully the node at the beginning is deleted\n");
        free(temp);
    }
}

void del_at_pos(int pos)
{
    struct node *q,*temp;
    q=start;
    if (start==NULL)
    {
        printf("the linked list in empty");
        return;
    }else if(q->link==NULL)
    {
        printf("the list has only one node sorry try after adding nodes");
    }
    else
        {
            for (int i=1; i<pos-1;i++)
            {
                q=q->link;
            }
            temp=q->link;
            q->link=temp->link;
            free(temp);
            printf("the data at the position %d is deleted successfully\n",pos);
        }
}

void del_data(int value)
{
    struct node *temp,*q;
    if(start==NULL)
    {
        printf("linked list is empty");
        return;
    }else if(start->data==value)
    {
        temp=start;
        start=temp->link;
        free(temp);
    }else
    {
        q=start;
        while(q->link!=NULL)
        {
            if(q->link->data==value)
            {
                break;
            }else
            {
                q=q->link;
            }
        }
        temp=q->link;
        q->link=temp->link;
        free(temp);
        printf("the value %d is deleted successfully\n",value);
    }
}

void display()
{
    struct node *ptr;
    ptr=start;

    while(ptr!=NULL)
    {
        printf("%d ->",ptr->data);
        ptr=ptr->link;
    }
    printf("NULL\n");
}

void search(int value)
{
    struct node *temp,*q;
    int count=0;
    q=start;
    if (start==NULL)
    {
        printf("linked list is empty");
        printf("we are existing...\n");
        return;
    }
    else if(start->data==value)
    {
        printf("the value %d is existed at the index position %d \n",value,count);
    }else
    {

        while(q->link!=NULL)
        {
             count=count+1;
            if(q->link->data==value)
            {
                printf("the data exist in the index position %d \n",count);
                return;

            }
            q=q->link;
        }
        printf("the value does not exit\n");
    }
}



void update(int value,int upval)
{
    struct node *temp,*q;
    int count=0;
    q=start;
    if (start==NULL)
    {
        printf("linked list is empty");
        printf("we are existing...\n");
        return;
    }
    else if(start->data==value)
    {
        start->data=upval;
        printf("the value %d  with %d\n",value,upval);
    }else
    {

        while(q->link!=NULL)
        {
             count=count+1;
            if(q->link->data==value)
            {
                q->link->data=upval;
                printf("the value %d is updated with %d\n",q->link->data,upval);
                return;

            }
            q=q->link;
        }
        printf("the value does not exit\n");
    }
}

void main()
{
        printf("please enter 1 to add data at the end\n");
        printf("please enter 2 to add data at the beginning\n");
        printf("please enter 3 to display data\n");
        printf("please enter 4 to delete data at the end\n");
        printf("please enter 5 to delete data at the beginning\n");
        printf("please enter 6 to add data at specific position\n");
        printf("please enter 7 to delete a specific value\n");
        printf("please enter 8 to search for value\n");
        printf("please enter 9 to update value\n");
    while(1)

    {
        int c;
        printf("enter the choice :");
        scanf("%d",&c);

        if (c==1)
        {
           int value;
           printf("enter the value to add :");
           scanf("%d",&value);
           create(value);
        }
        else if(c==2)
        {
            int value;
            printf("enter the value :");
            scanf("%d",&value);
            add_node_at_beg(value);

        }
        else if(c==3)
        {
            display();
        }
        else if(c==4)
        {
            del();

        }
        else if(c==5)
        {
             del_beg();

        }
        else if(c==6)
        {
            int value;
            printf("enter the position need to be deleted : ");
            scanf("%d",&value);
            del_at_pos(value);

        }
        else if(c==7)
        {
            int value;
            printf("enter the value to be deleted : ");
            scanf("%d",&value);
            del_data(value);

        }
        else if(c==8)
        {
            int value;
            printf("enter the value to be searched :");
            scanf("%d",&value);
            search(value);

        }else if(c==9)
        {
            int value;
            int replace;

            printf("enter the  value that need to be replaced :");
            scanf("%d",&value);

            printf("enter the replacing value :");
            scanf("%d",&replace);
            update(value,replace);

        }
    }
}
