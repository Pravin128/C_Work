#include "stdio.h"
void main()
{
	int i, c, temp, min, n, j, a[15], sort;
	do
	{
		printf("enter size of array :");
		scanf("%d", &n);

		printf("enter array elements :");
		for (i = 0; i < n; i++)
			scanf("%d", &a[i]);
		printf("by which method do you want to sort :\n1.bubble sort\n2.selection sort\n3.insertion sort");
		scanf("%d", &sort);

		switch (sort)
		{
		case 1:
			printf("applying bubble sort......\n");
			for (i = 0; i < n - 1; i++)
			{
				for (j = 0; j < n - i - 1; j++)
				{
					if (a[j] > a[j + 1])
					{
						temp = a[j];
						a[j] = a[j + 1];
						a[j + 1] = temp;
					}
				}
			}
			break;

		case 2:
			printf("applying seletion sort....");
			for (i = 0; i < n; i++)
			{
				min = i;
				for (j = i + 1; j < n; j++)
				{
					if (a[j] < a[min])
					{
						temp = a[i];
						a[i] = a[j];
						a[j] = temp;
					}
				}
			}
			break;

		case 3:
			printf("applying insertion sort.....\n");
			for (i = 0; i < n; i++)
			{
				temp = a[i];
				j = i - 1;
				while (j >= 0 && temp <= a[j])
				{
					a[j + 1] = a[j];
					j--;
				}
				a[j + 1] = temp;
			}
		}
		printf("sorted array is....");
		for (i = 0; i < n; i++)
			printf("%d\n", a[i]);
		printf("\ndo you want to continue......\n 1/0");
		scanf("%d", &c);
	}

	while (c == 1);
}