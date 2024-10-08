

#include <stdio.h>
#include <stdlib.h>
int main()
{

    int i,*ptr,n,sum=0;
    printf("enter the number of elements: ");
    scanf("%d",&n);
    ptr=(int*)malloc(n*sizeof(int));
    if(ptr==NULL)
    {
        printf("sorry! unable to allocate memory");
        exit (0);
    }
    printf("enter a value :");
    scanf("%d",ptr+i);
    printf("%d",*ptr);

    return 0;
}
