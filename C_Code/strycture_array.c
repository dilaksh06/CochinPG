


#include <stdio.h>
struct student{
char name[20];
int roll,m1,m2;
};

void main()
{
struct student a[70];
int i ,n;
printf("enter the limit of students : \n");
scanf("%d",&n);


for(i=0;i<n;i++){
    printf ("enter the name for %d:",i+1);
    scanf("%s",a[i].name);

    printf ("enter the roll no for %d student :\n",i+1);
    scanf("%d",&a[i].roll);

    printf ("enter the m1 for %d student :\n",i+1);
    scanf("%d",&a[i].m1);

    printf ("enter the m2 %d student :\n",i+1);
    scanf("%d",&a[i].m2);

}

}
