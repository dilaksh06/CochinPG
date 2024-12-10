#include <stdio.h>

void main()
{
    int a[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            int value;
            printf("enter the value for the row %d and the column %d : ", i + 1, j + 1);
            scanf("%d", &value);
            a[i][j] =value;
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {

            printf("%d ", a[i][j]);

        }
        printf("\n");
    }
}
