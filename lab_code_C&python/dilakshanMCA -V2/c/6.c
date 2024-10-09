#include <stdio.h>

struct employee{
char name[20];
int employee_Id,salary;
};

int main() {

int n;
printf("THis is employee salary management System\n");




printf("enter the number of employess: ");
scanf("%d",&n);
struct employee a[n];

for(int i=0;i<n;i++){

printf("enter the  name of the employee: ");
scanf("%s", a[i].name);

printf("enter the  id of the employee: ");
scanf("%d",&a[i].employee_Id);

printf("enter the  salary of the employee: ");
scanf("%d",&a[i].salary);


}
printf("the information about the users are below\n");
for(int i=0;i<n;i++){
printf("the name of the %d emplye is %s\nthe id of the employee is  %d\nthe salary of the employee is %d\n",a[i].name,a[i].employee_Id,a[i].salary);

}

return  0;

}




