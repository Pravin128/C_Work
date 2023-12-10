//traditional initailization...........

#include<stdio.h>
#define mon 12              //trad. initializer
int main(void)
{
    int days[mon]={31,28,31,30,31,30,31,31,30,31,30,31};
    int i;
    for(i=0;i<mon;i++)
    printf("month %2d has %2d days\n",i+1,days[i]);
return 0;
}