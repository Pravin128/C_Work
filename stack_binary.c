#include <stdio.h>
void decimal_to_binary();
int a[10], n, no, i, top = -1;
int temp;
void push();
void pop();
void display();
int main(void)
{
    printf("Enter the decimal number :");
    scanf("%d", &no);
    printf("The binary number  is %d : ", no);
    decimal_to_binary();
}
void decimal_to_binary()
{

    while (no > 0)
    {
        temp = no % 2;
        no /= 2;
        top++;
        push();
    }
    display();
}
void push()
{
    a[top] = temp;
}
void pop()
{
    top--;
    if (top >= 0)
    {
        display();
    }
}
void display()
{

    printf("%d", a[top]);
    pop();
}