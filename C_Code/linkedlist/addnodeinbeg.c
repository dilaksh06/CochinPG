#include <stdio.h>
#include <stdlib.h> // For malloc
#include <stdbool.h>  // Include this to use bool, true, and false
struct node {
    int data;
    struct node *link;
} *start = NULL; // Initialize start to NULL

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
    start=temp;

}
void main(){
create(50);
printf("what actually the start contain is the memory address of the newly created node temp \nand the memory value will be %d ",start);
printf("\nthe data in the start node is = %d ",start->data);
}


