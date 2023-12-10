#include"stdio.h"
int main(void)
{
   int last=0,num;
   printf("enter number : ");
   scanf("%d",&num);
   int num1=num;
    int sum=0;
    // int count=0;
    // int flag=0;
    // whlile(num>0)
    // {
    //     num/=10;
    //     ++count;
    //     flag=1;

    // }
    // if(flag==1)
    // {
    //     printf("number of digits are %d",count);
    // }
    while(num>0)
    {
        last=num%10;
        sum=sum+(last*last*last*last);
        num/=10;

    }

if(num1==sum)
{
    printf("armstrong number");
}
else
{
    printf("not a armstrong number");
}
}