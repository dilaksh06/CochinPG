#include <stdio.h>
#include <math.h>
#include <string.h>
struct Employee
{
    char Name[50];
    int Employee_Id;
    float Salary;
};
void main()
{
//Using structure, write a program to read and print data of n employees
//(Name, Employee Id and Salary)
int no_employee;
struct Employee employee[100];
printf("enter the number of employees : ");
scanf("%d",&no_employee);

for (int i=0;i<no_employee;i++)
{
    printf("enter the name of the employee %d : ",i+1);
    scanf("%49s", employee[i].Name);
    printf("enter the Id of the employee %d : ",i+1);
    scanf("%d",&employee[i].Employee_Id);
     printf("enter the Salary of the employee %d : ",i+1);
    scanf("%f",&employee[i].Salary);

}
printf("\n\n********the details of the employees are follow*******\n\n");
for (int y=0;y<no_employee;y++)
{
    printf("the name of the employee %d is : %s\n",y+1,employee[y].Name);

    printf("the Id of the employee %d : %d\n",y+1,employee[y].Employee_Id);

     printf("the Salary of the employee %d : %.2f\n",y+1,employee[y].Salary);
printf("\n");

}

}
