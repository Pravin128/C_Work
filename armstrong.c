#include <stdio.h>
#include <math.h>

int isArmstrong(int num);


int main(void)
{
    int num;
    printf("Enter a number to check if it is an Armstrong number: ");
    scanf("%d", &num);
    if (isArmstrong(num))
    {
        printf("%d is an Armstrong number.\n", num);
    }
    else
    {
        printf("%d is not an Armstrong number.\n", num);
    }
}

int isArmstrong(int num)
{
    int temp = num, a, sum = 0, i = 0;
    while (temp > 0)
    {
        temp /= 10;
        i++;
    }
    temp = num;
    while (temp > 0)
    {
        a = temp % 10;
        sum += pow(a, i);
        temp /= 10;
    }
    return(num==sum);
}