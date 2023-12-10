#include"stdio.h"
int sum(int a,int b)
{
    return a+b;
}

int main(void)
{
    int m=9,n=11;
    int s=sum(m,n);
    printf("sum is : %d",s);
}