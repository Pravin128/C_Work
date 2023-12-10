#include"stdio.h"
int square(int a)
{
    return a*a;
}

int main(void)
{
    int a=10;
    int s=square(a);
    printf("%d",s);
}