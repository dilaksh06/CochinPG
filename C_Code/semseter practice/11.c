#include <stdio.h>
#include<stdlib.h>
#include <math.h>
#include <string.h>

struct node
{
    int data;
    struct node *R,*L;
}*start=NULL;


struct node *create(int k) {
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    if (temp == NULL) {
        printf("Memory allocation failed. Unable to continue.\n");
        return NULL;
    }
    temp->data = k;
    temp->L = temp->R = NULL;
    return temp;
}

struct node *insertion(struct node *temp, int k) {
    if (temp == NULL) {
        return create(k); // Create and return a new node if tree/subtree is empty
    }
    if (k < temp->data) {
        temp->L = insertion(temp->L, k); // Insert in the left subtree
    } else if (k > temp->data) {
        temp->R = insertion(temp->R, k); // Insert in the right subtree
    } else {
        printf("Duplicate value %d not allowed in BST.\n", k);
    }
    return temp;
}

void preorder(struct node *temp) {
    if (temp != NULL) {
        printf("%d ", temp->data);  // Print the current node
        preorder(temp->L);  // Visit left subtree
        preorder(temp->R);  // Visit right subtree
    }

}



void main()
{
    printf("*************Link List Operation**************\n");
    printf("enter 1 to insert\nenter 2 to display\nenter 3 to diplay\n");
    printf("\nenter to 10 exit\n");

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
            start = insertion(start, data);
        }
        else if(choice==2)
        {
            preorder(start);
        }


        else if(choice==3)
        {


        }
        else if(choice==4)
        {
            printf("exit\n");
            break;
        }
        else
            {
                printf("invalid choice try again\n");
            }

    }
}
