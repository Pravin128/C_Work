#include <stdio.h>

int main()
{
	int n = 5;
	for (int row = 0; row < n; row++) 
    {
        for (int col = 0; col < n; col++) 
        {
			
			if (row > 0 && row < n - 1 && col > 0 && col < n - 1) 
            {
				printf("  ");
			}
			else {
				printf("* ");
			}
		}
		printf("\n");
	}
	return 0;
}