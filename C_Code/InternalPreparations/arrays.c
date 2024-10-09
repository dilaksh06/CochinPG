#include<stdio.h>
void main(){
    int n;
    printf("enter the limit of an array : ");
    scanf("%d",&n);
    int a[n];

    for (int i=0;i<n;i++){
        printf("enter the %d number : ",i );
        scanf("%d",&a[i]);
    }
 printf("numbers in the array");
     for (int y=0;y<n;y++){

        printf("%d \n",a[y]);
    }

}
