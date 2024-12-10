#include <stdio.h>
#include <stdlib.h> // For malloc

struct node
{
    int data;
    struct node *next;
} *top = NULL;

int isempty()
{
    return top == NULL;
}

void push(int value)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    if (newnode == NULL)
    {
        printf("stack overflow memory allocation failed.\n");
        return;
    }
    newnode->data = value;
    newnode->next = top;
    top = newnode;
    printf("%d pushed into the stack successfully\n", value);
}

void display()
{
    struct node *temp = top;
    while (temp != NULL)
    {
        printf("the value is %d\n", temp->data);
        temp = temp->next;
    }
}

void del()
{
    if (top == NULL)
    {
        printf("stack is on underflow");
        return;
    }
    else
    {
        struct node *temp = top;

        printf("The top value %d in the stack is deleted successfully\n", top->data);
        top = temp->next; // Move top to the next node
        free(temp);
    }
}

int main()
{
    while (1)
    {
        int n, value;
        printf("enter 1 to add value in stack :\nenter 2 display \nenter 3 to delete top element\nenter 4 to exit:\n");
        scanf("%d", &n);

        if (n == 1)
        {
            printf("enter a value :");
            scanf("%d", &value);
            push(value);
        }
        else if (n == 2)
        {
            display();
        }
        else if (n == 4)
        {
            printf("we are exiting");
            return 0;
            exit;
        }
        else if (n == 3)
        {
            del();
        }
    }
}
