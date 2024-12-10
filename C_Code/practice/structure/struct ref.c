#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node {
    int data;
    struct node *next;
};

int main() {

    //struct node node1;
    //struct node node2;
    //int x=10;
    //node1.data=x;
    //node2.data=45;
    //node2.next=NULL;
   // node1.next=&node2;

    //printf("%d\n",node1.data);
    //printf("%p\n",node1.next);
    //printf("%d\n",node1.next->data);

    struct node *temp;
    struct node *start;
    temp=(struct node *)malloc(sizeof(struct node));
    temp->data=56;
    temp->next=NULL;
    start=temp;
    temp=(struct node *)malloc(sizeof(struct node));

    temp->data=76;
    temp->next=NULL;
    start->next=temp;

    printf("the value at start->data is = %d",start->data);
    free(temp);
    return 0;
}
