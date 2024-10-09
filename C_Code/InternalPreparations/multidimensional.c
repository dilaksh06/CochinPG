#include<stdio.h>
void main(){
    int r,c;
    printf("enter the limit for row of an array : ");
    scanf("%d",&r);
    printf("enter the limit for row of an array : ");
    scanf("%d",&c);
    int arrays[r][c];

    for(int i=0;i<r;i++){
            for(int y=0;y<c;y++){
                    printf("enter the value for row number %d and column number %d:",i,y);
                    scanf("%d",&arrays[i][y]);
            }

    }

    for(int i=0;i<r;i++){
            for(int y=0;y<c;y++){
                    printf("%d ",arrays[i][y]);

            }
            printf("\n");

    }



}
