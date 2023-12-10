//designated initializers..............

#include<stdio.h>
#define mon 12              
int main(void)
{
    int days[mon]={31,28,[4]=31,30,31,[3]=29};
    int i;
    for(i=0;i<mon;i++)
    printf("month %2d has %2d days\n",i+1,days[i]);
return 0;
}