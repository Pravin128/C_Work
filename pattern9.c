#include"stdio.h"
int main(void)
{
   int row=0,col=0,tspaces,spaces,n=6;
    for(row=0;row<n;row++)
    {
        tspaces=n-col;
        for(spaces=0;spaces<=tspaces;spaces++)
        {
            printf(" ");

        }
        for(col=0;col<n-row;col++)
        {
            printf(" * ");

        }
        printf("\n");
    }
}