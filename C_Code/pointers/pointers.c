#include <stdio.h>
#include <stdlib.h>

struct Person {
    char name[50];
    int age;
};

int main() {
    // Allocate memory for a structure pointer
    struct Person *ptr = (struct Person *)malloc(sizeof(struct Person));

    if (ptr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Assign values to the dynamically allocated structure
    ptr->age = 40;
    char x[50]="dilakshan";

    //snprintf(ptr->name, sizeof(ptr->name), "Charlie");

    printf("Name: %s\n", ptr->name);

    printf("Age: %d\n", ptr->age);

    free(ptr); // Free the allocated memory

    int arr[3]={10,20,30};
    int *abc=arr;
    for (int i=0;i<3;i++)
    {
        printf("%d\n", *(abc+i));
        printf("%d\n", *abc[i]);
    }

    return 0;
}
