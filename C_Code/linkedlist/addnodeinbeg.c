#include <stdio.h>
#include <stdlib.h> // For malloc
#include <stdbool.h>  // Include this to use bool, true, and false
struct node {
    int data;
    struct node *link;
} *start = NULL; // Initialize start to NULL

void main(){
    struct node a,b;
    printf("Enter the alue");
    scanf("%d",&a.data);
    printf("%d",a.data);

   printf("enter the data");
   scanf("%d",a->data);
   printf("%d",a->data);


}
