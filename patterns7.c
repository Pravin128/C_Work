#include"stdio.h"
int main(void)
{
    int row,col,n=6,spaces;
    for(row=0;row<n;row++)
    {
        for(spaces=0;spaces<2*row;spaces++)
        {
            printf(" ");
        }
        for(col=0;col<n-row;col++)
        {
            printf("* ");
        }
    printf("\n");
    }
}