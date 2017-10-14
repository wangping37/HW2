#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void)
{
	double amount;
	double rate;
	double pricipal = 5000;
	unsigned int year ;
	printf("§Q²v:");
	scanf_s("%lf", &rate);
	printf("%4s%21s\n", "year", "Amount on deposit");
	for (year = 1; year <= 15; year++)
	{
		amount = pricipal * pow(1.0 + rate, year);
		printf("%4u%21.2f\n", year, amount);
	}
	system("pause");
	return 0;
}