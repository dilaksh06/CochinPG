#include<stdio.h>>
void main(){
    float avg;
    int sum=0, limit;

    printf("enter the number for the limit of an array : ");
    scanf("%d",&limit);
    int arrays[limit];
    for (int i=0;i<limit;i++){
        printf("enter the %d number : ",i+1);
        scanf("%d",&arrays[i]);
    }

     for (int y=0;y<limit;y++){
        sum=sum+arrays[y];
    }

    printf("the sum of the number is %d\n",sum);
    printf("the average of the sum of the %d number is %.2f\n",limit,(float)sum/limit);
    size_t size;
    size=sizeof(arrays)/sizeof(arrays[limit]);
    printf("the size of the array is : %d",size);


}
