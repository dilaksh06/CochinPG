
#include <stdio.h>
#include <stdlib.h>  // For malloc
#include <stdbool.h> // Include this to use bool, true, and false
#include <string.h>  // For strcmp

struct node
{
    int data;
    struct node *link;
} *start = NULL; // Initialize start to NULL


//adding node
void create(int k)
{
    struct node *q, *temp;

    // Allocate memory for the new node
    temp = (struct node *)malloc(sizeof(struct node));
    if (temp == NULL)
    {
        printf("Memory allocation failed\n");
        return;
    }

    // Assign the data and set the link to NULL
    temp->data = k;
    temp->link = NULL;

    // If the list is empty, set 'start' to the new node
    if (start == NULL) {
        start = temp;
    } else {
        // Otherwise, traverse the list and add the new node at the end
        q = start;
        while (q->link != NULL) {
            q = q->link;
        }
        q->link = temp;
    }
}

//adding node in between nodes
void addnode(int k, int pos)
{
    int i;
    struct node *q, *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = k;
    q = start;
    for (i=0; i < pos - 1; i++)
    {
        q = q->link;
    }
    if (q == NULL)
    {
        printf("incorect postion");
        exit;
    }
    temp->link = q->link;
    q->link = temp;
}

//deletion of node in the beginning
void dele()
{
    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node));
    temp=start;
    start=temp->link;
    free(temp);

}

void delenodeinbet(int k)
{
    struct node *temp,*q;
    if (start->data==k)
    {
        temp=start;
        start=temp->link;
        free(temp);
    }
    q=start;
    while(q->link!=NULL)
    {
        if(q->link->data==k)
        {
            temp=q->link;
            q->link=temp->link;
            free(temp);
        }
        q=q->link;
    }
}

void display()
{

    struct node *temp;
    temp=start;
    printf("\nthe values are respectively\n");
    while(temp!=NULL)
    {
     printf("%d->",temp->data);
     temp=temp->link;
    }
    printf("NULL\n");
}


void main()
{

    while (1) // Infinite loop
    {
        char text[2]; // Increased size to accommodate null terminator
        int n;
        int val;

        printf(" Enter 'y' to continue: \n Enter 'n' to stop:\n");
        scanf("%s", text);

        if ((strcmp(text, "y") == 0 || strcmp(text, "Y") == 0)) // Corrected string comparison
        {
            printf(" Enter 1 to add data in linked list : \n Enter 2 to add data in between two nodes : \n Enter 3 to delete data in the beginning :\n Enter 4 to delete data in the beginning : \n Enter 5 to display : \n");
            scanf("%d", &n);
            if (n == 1)
            {
                printf("Enter a number to save in linked list:\n");
                scanf("%d", &val);

                create(val); // Assuming create function is defined elsewhere
                continue;
            }
            else if (n == 2)
            {
                printf("Enter a number to add in between two nodes in linked list:\n");
                scanf("%d", &val);

                int pos;
                printf("Enter the position number to add in linked list:\n");
                scanf("%d", &pos);

                addnode(val, pos); // Assuming create function is defined elsewhere
                continue;
            } else if (n == 3)
            {
                printf("We have successfully deleted in the entry in the beginning\n");
                dele();

            }else if(n==4)
            {
                int pos;
                printf("Enter the position number to add in linked list:\n");
                scanf("%d", &pos);
                delenodeinbet(pos);
                continue;
            }else if(n==5)
            {
                printf("tha values are respectively:\n");
                display();
                continue;
            }
        }
        else if (strcmp(text, "n") == 0 )
        {
            printf("we ate going to print the values in the node\n");
            struct node *ptr = start;
            while (ptr != NULL)
            {
                printf("%d -> ", ptr->data);
                ptr = ptr->link;
            }
            break;

        }
    }

}
