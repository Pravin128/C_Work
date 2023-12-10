#include"stdio.h"
void ev_odd(int *a)
{
    if(*a%2==0)
    printf("even");
    else 
    printf("odd");
}

int main(void)
{
    int a;
    printf("enter a : ");
    scanf("%d",&a);
    ev_odd(&a);
    
}