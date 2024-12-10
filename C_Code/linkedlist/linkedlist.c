#include <stdio.h>
#include <stdlib.h> // For malloc
#include <stdbool.h>  // Include this to use bool, true, and false
struct node {
    int data;
    struct node *link;
} *start = NULL,*end=NULL; // Initialize start to NULL

void create(int k) {
    struct node *q, *temp;

    // Allocate memory for the new node
    temp = (struct node*) malloc(sizeof(struct node));
    if (temp == NULL) {
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

int main() {
    // Example: Create a linked list with 3 nodes
    bool x=true;
    int n;

    while (true){
        printf("enter a number to add in linkedlist :");
        scanf("%d",&n);
        create(n);

        char ch;
        printf("Enter 'y' to continue updating the linked list:\n");
        printf("Enter 'n' to discontinue updating the linked list:\n");
        printf("Your choice: ");

 if (scanf(" %c", &ch) != 1) {
            // Handle invalid input
            printf("Invalid input. Exiting.\n");
            return 1;
        }


       if (ch == 'y' || ch == 'Y') {
            continue;
        } else {
            printf("Updating the linked list has been discontinued.\n");
            break; // Exit the loop
        }

}

    // Print the linked list to verify
    struct node *ptr = start;
    while (ptr != NULL) {
        printf("%d -> ", ptr->data);
        ptr = ptr->link;
    }
    printf("NULL\n");

    return 0;
}
