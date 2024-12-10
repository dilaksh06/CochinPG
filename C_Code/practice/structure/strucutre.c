#include <stdio.h>

struct student
{
    char name[50];
    int roll_no, m1, m2;
}a[2];

void main()
{

    printf("this is the system to get the details of student");

    // printf("\nenter the name of  the student :");
    // scanf("%s",a.name);
    // printf("\nenter the roll_no :");
    // scanf("%d",&a.roll_no);
    // printf("\nenter the mark 1 : ");
    // scanf("%d",&a.m1);
    // printf("enter the mark 2 : ");
    // scanf("%d",&a.m2);
    // printf(" the name is %s and the roll no is %d, the mark 1 is %d , the mark 2 is %d", a.name,a.roll_no,a.m1,a.m2);

    for (int i = 0; i <2; i++)
    {
        printf("\nenter the name of  the student :");
        scanf("%s", a[i].name);
        printf("\nenter the roll_no :");
        scanf("%d", &a[i].roll_no);
        printf("\nenter the mark 1 : ");
        scanf("%d", &a[i].m1);
        printf("enter the mark 2 : ");
        scanf("%d", &a[i].m2);
    }

    for (int i = 0; i <2; i++)
    {
        printf("the name is %s and the roll no is %d, the mark 1 is %d , the mark 2 is %d \n", a[i].name, a[i].roll_no, a[i].m1, a[i].m2);
    }
}
