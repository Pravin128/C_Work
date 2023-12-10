#include"stdio.h"
int main(void)
{
int n=6,row,col,spaces,tspaces;
for(row=0;row<n;row++)
{
    tspaces=n-row;
    for(spaces=tspaces;spaces>0;spaces--)
    {
        printf(" ");
    }
    for(col=row;col>=0;col--)
    {
        printf("%d",col);
    }
    for(col=col+2;col<=row;col++)
    {
        printf("%d",col);
    }
    printf("\n");
    }
}