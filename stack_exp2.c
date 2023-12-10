#include <stdio.h>
#include <ctype.h>

#define max 30
#define p_size 30

int s[max], top = -1;

void push(int item);
int pop();
void postfix(char pfix[]);

int main(void)
{
    int i;
    char pfix[p_size];
    printf("Enter Postfix Expression end with ')': ");
    for (i = 0; i < p_size; i++)
    {
        scanf(" %c", &pfix[i]);
        if (pfix[i] == ')')
        {
            break;
        }
    }
    postfix(pfix);
    return 0;
}

void postfix(char pfix[])
{
    int i, value, op1, op2;
    char ch;
    for (i = 0; pfix[i] != ')'; i++)
    {
        ch = pfix[i];
        if (isdigit(ch))
        {
            push(ch - '0');
        }
        else if (ch == '+' || ch == '-' || ch == '*' || ch == '/')
        {
            op1 = pop();
            op2 = pop();
            switch (ch)
            {
            case '*':
                value = op2 * op1;
                break;
            case '/':
                value = op2 / op1;
                break;
            case '+':
                value = op2 + op1;
                break;
            case '-':
                value = op2 - op1;
                break;
            }
            push(value);
        }
    }
    printf("Postfix expression result: %d\n", pop());
}

void push(int item)
{
    if (top >= max - 1)
    {
        printf("Stack Overflow\n");
        return;
    }
    else
    {
        top++;
        s[top] = item;
    }
}

int pop()
{
    if (top < 0) {
        printf("Stack Underflow\n");
        return -1;
    }
    else
    {
        int item = s[top];
        top--;
        return item;
    }
}
