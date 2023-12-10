#include"stdio.h"
int power(int base,int a)
{
    if(a!=0)
    return(base*power(base,a-1));
    else
    return 1;
}
int main(void)
{   int a,value,base;
    printf("enter base : ");
    scanf("%d",&base);
    printf("enter power : ");
    scanf("%d",&a);
    value=power(base,a);
    printf("%d^%d = %d",base,a,value);
    

}