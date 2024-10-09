#include<stdio.h>

void main() {
    int age;

    // Asking the user to input their age
    printf("Enter your age: ");
    scanf("%d", &age);

    // Using goto to jump to labels based on the condition
    if (age >= 18) {
        goto vote;
    } else {
        goto novote;
    }

vote:
    printf("You are eligible to vote.\n");
    return;  // Exiting the function after printing the message

novote:
    printf("You are not eligible to vote.\n");
}
