#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int i, j, k, x, y;
	int a, b, c, d, e;
	for (i = 1; i <= 5; i++)
	{
		k = 5 - i;
		y = 2 * i - 1;
		for (j = 1; j <= k; j++)
		{
			printf(" ");
		}
		for (x = 1; x <= y; x++)
		{
			printf("*");
		}
		putchar('\n');
	}
	for (a = 4; a >= 1; a--)
	{
		b = 5 - a;
		c = 2 * a - 1;
		for (d = 1; d <= b; d++)
		{
			printf(" ");
		}
		for (e = 1; e <= c; e++)
		{
			printf("*");
		}
		putchar('\n');
	}
	system("pause");
	return 0;
}