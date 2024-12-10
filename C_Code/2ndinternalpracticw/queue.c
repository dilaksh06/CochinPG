#include <stdio.h>
#include <stdlib.h>
#define MAX 5

int rear = -1, front = -1;
int queue[MAX];

int isFull()
{
    return rear == MAX - 1;
}

int isEmpty()
{
    return front == -1 || front > rear;
}

void create(int k)
{
    if (isFull())
    {
        printf("The queue is overflow\n");
    }
    else
    {
        if (front == -1)  // Set front to 0 if adding the first element
            front = 0;
        rear++;
        queue[rear] = k;
        printf("The data %d is added at the position %d\n", k, rear);
    }
}

void dle()
{
    if (isEmpty())
    {
        printf("The queue is underflow\n");
    }
    else
    {
        int value = queue[front];
        printf("The data %d is deleted from the index position %d\n", value, front);
        front++;

        if (front > rear)  // Reset the queue if it becomes empty
        {
            rear = front = -1;
        }
    }
}

int main()
{
    printf("Enter 1 to add data :\n");
    printf("Enter 2 to delete data :\n");

    while (1)
    {
        int choice;
        printf("Enter the choice : ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            int value;
            printf("Enter the value : ");
            scanf("%d", &value);
            create(value);
        }
        else if (choice == 2)
        {
            dle();
        }
        else
        {
            printf("Invalid choice. Please enter 1 to add or 2 to delete.\n");
        }
    }
    return 0;
}
