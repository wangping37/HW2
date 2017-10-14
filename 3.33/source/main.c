#include <stdio.h>;
#include <stdlib.h>;
int main(void)
{
	int w, l,i,j,k,x;
	printf("Enter width and length:");
	scanf_s("%d %d", &w, &l);
	for (i = 1; i <= l; i++)
	{
		if ((i == 1) || (i == l))
		{
			for (j = 1; j <= w; j++)
			{
				printf("+");
			}
			putchar('\n');
		}
		if ((i != 1) && (i != l))
		{
			printf("+");
			k = w - 2;
			for (x = 1; x <= k; x++)
			{
				printf(" ");
			}
			printf("+\n");
		}
	}
	system("pause");
	return 0;
}