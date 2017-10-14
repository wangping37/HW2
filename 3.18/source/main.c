#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int x = 200;
	double y, z;
	printf("Enter sales in dollars(-1 to end):");
	scanf_s("%lf", &y);
	while (y != -1)
	{
		z = x + 0.09*y;
		printf("Salary	is:$%.2f\n", z);
		printf("Enter sales in dollars(-1 to end):");
		scanf_s("%lf", &y);
	}
	system("pause");
	return 0;
}
