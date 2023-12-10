#include <stdio.h>
int main(void)
{
    int a[5][5], i, j, r, c, b[5][5];
    printf("Enter how many rows and columns you want");
    scanf("%d%d", &r, &c);

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("\nEnter element at[%d][%d]", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    // int ,i,j,r,c;
    printf("Enter how many rows and columns you want");
    scanf("%d%d", &r, &c);

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("\nEnter element at[%d][%d]", i, j);
            scanf("%d", &b[i][j]);
        }
    }
    for (i = 0; i < r; i++)
    {
        printf("\n");
        for (j = 0; j < c; j++)
        {
            printf("%d \t", a[i][j]);
        }
    }
    printf("\n");
    printf("\n");
    for (i = 0; i < r; i++)
    {
        printf("\n");
        for (j = 0; j < c; j++)
        {
            printf("%d \t", b[i][j]);
        }
    }
    printf("\n\tAddition of two array is : ");
    for (i = 0; i < r; i++)
    {
        printf("\n");
        for (j = 0; j < c; j++)
        {
            printf("%d \t", a[i][j] + b[i][j]);
        }
    }
}