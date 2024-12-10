#include <stdio.h>
#include <string.h>
struct person
{
    char name[40];
    int age;
    int salary;
}*ptr,person1;

void main()
{



  // printf("enter the name :");
   //scanf("%s", person1.name);
   strcpy(person1.name, "John Doe");
   person1.age=26;
   person1.salary=45000;

   printf("name is : %s\n",person1.name);
   ptr=&person1;
   printf("age is : %d",ptr->age);
    printf("\nage is : %d",(*ptr).age);
}
