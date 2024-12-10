#include <stdio.h>

void main()
{
    int a,*p;
    int c[3];
    printf("%d\n",(void*)&c[0]);
    printf("%d\n",(void*)&c[1]);
    printf("%d\n",(void*)&c[2]);

    printf("\n\n");
    printf("%d\n",(void*)(c+1));
    printf("%d\n",(void*)(c+2));
    printf("%d\n",(void*)(c+3));

    a=10;
    p=&a;
    printf("%d\n",*p);
    printf("%u",*p);

    int x=5,y=10;
    int *d,*s,temp;
    printf("before swap operation the value of x and y : %d and %d\n", x,y);
    d=&x;
    temp=s;
    s=&y;
    x=*s;
    y=*d;
    printf("after swap operation the value of x and y : %d and %d\n", x,y);


}
