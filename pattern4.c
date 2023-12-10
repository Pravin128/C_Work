
#include"stdio.h"
int main(void)
{    int n=6;
    int row,col,totalcols;
    for(row=1;row<2*n;row++)
    {   totalcols=row>n?2*n-row:row;
        for(col=1;col<totalcols;col++){
            printf("* ");
        }
        printf("\n");
    }
}