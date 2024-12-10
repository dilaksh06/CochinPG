#include <stdio.h>
#include <stdlib.h>

#define MAX 5
int queue[MAX];
int front = -1, rear = -1;

// Function to add an element to the queue
void add(int value) {
    if (rear == MAX - 1) {  // Queue is full
        printf("The queue is overflow\n");
    } else {
        if (front == -1) front = 0;  // Initialize front if adding the first element
        rear++;
        queue[rear] = value;
        printf("The value %d is successfully added at position %d\n", value, rear);
    }
}

// Function to delete an element from the queue
void _delete() {
    if (front == -1 || front > rear) {  // Queue is empty
        printf("The queue is underflow\n");
    } else {

        printf("The value %d is successfully deleted at position %d\n", queue[front], front);
        front++;
    }

    // Reset front and rear if the queue becomes empty after deletion
    if (front > rear) {
        front = rear = -1;
    }
}

// Function to display elements of the queue
void display() {
    if (front == -1 || front > rear) {  // Queue is empty
        printf("The queue is empty\n");
    } else {
        printf("The values are:\n");
        for (int i = front; i <= rear; i++) {
            printf("%d\n", queue[i]);
        }
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
