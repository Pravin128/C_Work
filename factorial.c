#include"stdio.h"
int main(void)
{
    double num,i,factorial=1,flag=0;
    printf("enter number to find factorial : ");
    scanf("%lf",&num);
    for(i=1;i<=num;i++)
    {   
        
        factorial=factorial*i;
        flag=1;
         
    }
    if(flag==1)
     printf("factorial of number = %.0lf",factorial);
    //   printf("factorial of number = %e",factorial);
    
    
}