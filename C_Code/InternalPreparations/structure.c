#include<stdio.h>
struct student{
char name[20];
int rollno, mark1,mark2;

};
void main(){

    struct student a[70];
    int limit;
    printf("enter the number of student : ");
    scanf("%d",&limit);
    for(int i=0;i<limit;i++){
        printf("enter the name of the %d student : ",i+1);
        scanf("%s",&a[i].name);

        printf("enter the rollno of the %d student : ",i+1);
        scanf("%d",&a[i].rollno);

        printf("enter the mark1 of the %d student : ",i+1);
        scanf("%d",&a[i].mark1);

        printf("enter the mark2 of the %d student : ",i+1);
        scanf("%d",&a[i].mark2);
    }

    for(int i=0;i<limit;i++){
        printf("the name of the student is %s, the roll no is %d, the mark1 is %d and the mark2 is %d\n",a[i].name,a[i].rollno,a[i].mark1,a[i].mark2);
    }


}
