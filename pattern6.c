#include"stdio.h"
int main(void)
{
    char i,j,count='a';
    for(i='a';i<='e';i++)
    {
        for(j='a';j<=i;j++)
        {
            printf("%c",count);
            ++count;

        }
    printf("\n");    
    }
}