
#include"stdio.h"
int main(void)
{    int n=6;
    int row,col,totalcols,spaces,tspaces;
    for(row=1;row<2*n;row++)
    {   totalcols=row>n?2*n-row:row;
        tspaces=n-totalcols;
        for(spaces=0;spaces<tspaces;spaces++)
        {
            printf(" ");
        }   
        for(col=1;col<totalcols;col++){
            printf("* ");
        }
        printf("\n");
    }
}