#include <stdio.h>




void main()
{
    int n,first=0,second=1,next;
    printf("enter the number of terms : ");
    scanf("%d",&n);
    printf("%d %d ",0,1);
    for (int i=0;i<n;i++)
    {
        next=first+second;
        first=second;
        second=next;
        printf("%d ",next);
    }


}
