#include <stdio.h>
#include <stdlib.h>  // For malloc

#define MAX 5

int stack[MAX];
int top=-1;

int isEmpty()
{
    return top==-1;
}

int isFull()
{
    return top==MAX-1;
}

int push(int value)
{
 if(isFull()){
    printf("Stack Overflow! Cannot add more items.\n");
  //exit(0);  // Use parentheses when calling exit.

 }else
 {
        top++;            // Increment top to the next position
        stack[top] = value; // Add value to the stack
        printf("%d pushed into the stack.\n", value);
 }
}

// Function to remove an element from the stack (pop)
int pop() {
    if (isEmpty()) {
        printf("Stack Underflow! No items to remove.\n");
        return -1;
    } else {
        int poppedValue = stack[top]; // Store the top value
        top--;                        // Decrease top (remove the item)
        return poppedValue;           // Return the popped value
    }
}

int display()
{
    for(int i=top;i>-1;i--)
    {
        printf("the %d value in the stack is %d\n",i,stack[i]);
    }
}


void main()
{
 while(1)
 {
     int n;
     printf("enter 1 to add  number to stakck \nenter 2 pop value in stack \nenter 3 to display the value in stack \nenter 4 to exit : \n");
     scanf("%d",&n);
     if(n==1)
     {
         int value;
         printf("enter a number to add in stack\n");
         scanf("%d",&value);
         push(value);
         //continue;
     }else if(n==2)
        {

            printf("\n%d is successfully deleted\n",pop());
            continue;
        }else if(n==3)
        {
            printf("we are printing the value in the stack\n");
            display();
        }else if(n==4)
        {
            printf("we are existing the program");
            break;
        }
 }
}
