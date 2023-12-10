#include "stdio.h"
int top = -1, a[10], n, x;
void push()
{
	if (top == n - 1)
		printf("\nstack overflow\n");
	else
	{
		top++;
		printf("enter element : ");
		scanf("%d", &x);
		a[top] = x;
	}
}

void pop()
{ 
	if (top == -1)
		printf("\nstack empty\n");
	else
	{
		printf("\nelement %d is deleted \n", a[top]);
		top--;
	}
}

void display()
{
	int i;
	if (top == -1)
		printf("\nstack empty\n");
	else
	{
		for (i = top; i >= 0; i--)
			printf("%d\t", a[i]);
	}
}

int main(void)
{
	int choice, ch;
	printf("enter stack size: \n");
	scanf("%d", &n);
	do
	{
		printf("\nEnter your choice:\n 1.push\n2.pop\n3.display\n");
		scanf("%d", &choice);
		switch (choice)
		{
		case 1:
			push();
			break;
		case 2:
			pop();
			break;
		case 3:
			display();
			break;
		default:
			printf("\ninvalid input\n");
			break;
		}
		printf("\ndo you want to continue 1/0\n");
		scanf("%d", &ch);
	} while (ch == 1);
}
