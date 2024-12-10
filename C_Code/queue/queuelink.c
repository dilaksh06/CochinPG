#include <stdio.h>
#include <stdlib.h>

// Define the Node structure
struct node {
    int data;
    struct node *link;
};

// Global pointers for the queue
struct node *front = NULL, *rear = NULL;

// Function to insert an element into the queue
void insertion(int k) {
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    if (temp == NULL) {
        printf("Memory allocation failed. Exiting...\n");
        return;
    }
    temp->data = k;
    temp->link = NULL;

    if (front == NULL) {
        // Initialize the queue
        front = rear = temp;
    } else {
        // Add the new node at the end
        rear->link = temp;
        rear = temp;
    }

    printf("Data %d is added to the queue.\n", k);
}

// Function to display the queue
void display() {
    if (front == NULL) {
        printf("The queue is empty.\n");
        return;
    }
    struct node *ptr = front;
    while (ptr != NULL) {
        printf("%d -> ", ptr->data);
        ptr = ptr->link;
    }
    printf("NULL\n");
}

// Function to delete an element from the queue
void del() {
    if (front == NULL) {
        printf("The queue is empty. No node to delete.\n");
        return;
    }
    struct node *temp = front;
    front = front->link;

    if (front == NULL) {
        // If the queue becomes empty, update rear
        rear = NULL;
    }
    printf("Deleted node with value %d.\n", temp->data);
    free(temp);
}

// Main function
int main() {
    printf("Queue Operations Using Linked List\n");
    printf("1. Add data to the queue\n");
    printf("2. Display the queue\n");
    printf("3. Delete data from the queue\n");
    printf("4. Print first data only\n");
    printf("5. Exit\n");

    while (1) {
        int choice, value;
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the value to add to the queue: ");
                scanf("%d", &value);
                insertion(value);
                break;
            case 2:
                display();
                break;
            case 3:
                del();
                break;
            case 4:
                if (front != NULL) {
                    printf("First data: %d\n", front->data);
                } else {
                    printf("Queue is empty, no data to display.\n");
                }
                break;
            case 5:
                printf("Exiting the program.\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}
