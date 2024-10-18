#include <stdio.h>
#include <stdlib.h>  // For malloc
#include <stdbool.h> // Include this to use bool, true, and false
#include <string.h>  // For strcmp

struct node
{
    int data;
    struct node *link;
} *start = NULL; // Initialize start to NULL

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

void addnode(int k, int pos)
{
    int i;
    struct node *q, *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = k;
    q = start;
    for (i; i < pos - 1; i++)
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

void main()
{

    while (1) // Infinite loop
    {
        char text[2]; // Increased size to accommodate null terminator
        int n;
        int val;

        printf("Enter 'y' to continue and 'n' to stop:\n");
        scanf("%s", text);

        if ((strcmp(text, "y") == 0 || strcmp(text, "Y") == 0)) // Corrected string comparison
        {
            printf("Enter 1 to add data in linked list and 2 to add data in between two nodes:\n");
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
            }
        }
        else
        {
            printf("we ate going to print the values in the node\n");
            struct node *ptr = start;
            while (ptr != NULL)
            {
                printf("%d -> ", ptr->data);
                ptr = ptr->link;
            }
        }
    }
    addnode(2, 3);
}
