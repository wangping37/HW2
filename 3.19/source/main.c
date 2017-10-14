#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	double interest, rate;
	int principal, days;
	printf("Enter loan pricipal(-1 to end):");
	scanf_s("%d", &principal);
	while (principal != -1)
	{
		printf("Enter interest rate:");
		scanf_s("%lf", &rate);
		printf("Enter term of the loan in days:");
		scanf_s("%d", &days);
		interest = principal*rate*days / 365;
		printf("The interest charge is $%.2f\n", interest);
		putchar('\n');
		printf("Enter loan pricipal(-1 to end):");
		scanf_s("%d", &principal);
	}
	system("pause");
	return 0;
}