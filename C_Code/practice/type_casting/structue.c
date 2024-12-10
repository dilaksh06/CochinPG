#include<stdio.h>

struct students
{
    int roll_no;
    char name[50];
    int m1,m2,m3;
};

void main()
{
    int no;
    struct students student[50];
    printf("enter the number of students :");
    scanf("%d",&no);
    for(int i=0;i<no;i++)
    {
        printf("enter the name for student %d :",i+1);
        scanf("%49s",&student[i].name);
        printf("enter the roll-no for student %d :",i+1);
        scanf("%d",&student[i].roll_no);
        printf("enter the marks of m1,m2,m3 :");
        scanf("%d %d %d",&student[i].m1,&student[i].m2,&student[i].m3);

    }
    for(int i=0;i<no;i++)
    {

        printf("the name of the student %d is : %s\n",i+1,student[i].name);

        printf("the roll no of the student %d is : %d\n",i+1,student[i].roll_no);

        printf("the marks of the %d student is : %d,%d,%d\n",i+1,student[i].m1,student[i].m2,student[i].m3);
    }



}
