#include <stdio.h>

struct DOB{
    int day;
    int month;
    int year;
};

struct student{
    int roll_no;
    char name[100];
    float fees;
    struct DOB date;

};

void main(){
    struct student stud1;
    printf("enter the roll number :");
    scanf("\n",&stud1.roll_no);
    printf("\n enter the name");
    scanf("%s",stud1.name);
    printf("enter the fees :");
    scanf("%f",&stud1.fees);
    printf("\n enter the DOB");
    scanf("%d%d%d",&stud1.date.day,&stud1.date.month,&stud1.date.year);
    printf("\n**********Student's deteails**********");
    printf("\n ROll No. = %d",stud1.roll_no);
    printf("\n Name = %s", stud1.name);
    printf("\n DOB = %d %d %d",stud1.date.day,stud1.date.month,stud1.date.year);

}
