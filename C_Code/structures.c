


#include <stdio.h>
struct student{
char name[20];
int roll,m1,m2;
};

void main()
{
struct student a;
printf("enter the name: ");
scanf("%s",a.name);
printf("enter the roll number and the  mark 1 and mark 2");
scanf("%d %d %d",&a.roll,&a.m1,&a.m2);
printf("%s %d %d %d", a.name, a.roll,a.m1,a.m2);
}
