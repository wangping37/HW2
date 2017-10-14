#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int x = 40;
	int	hr;
	double	d, s;//dollars,salary
	printf("Enter # of hours worked(-1 to end):");
	scanf_s("%d", &hr);
	while (hr != -1)
	{
		printf("Enter hourly rate of the worker($00.00):");
		scanf_s("%lf", &d);
		if (hr > x)
		{
			s = 1.5*(hr - x)*d + x*d;
		}
		else
		{
			s = hr*d;
		}
		printf("Salary is $%.2f\n", s);
		putchar('\n');
		printf("Enter # of hours worked(-1 to end):");
		scanf_s("%d", &hr);
	}
	system("pause");
	return	0;
}