#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int ac;
	double bb, ba, ch, cr, cl;
	printf("Enter account number (-1 to end):");
	scanf_s("%d", &ac);
	if (ac != -1)
	{
		printf("Enter begin balance:");
		scanf_s("%lf", &bb);
		printf("Enter total charges:");
		scanf_s("%lf", &ch);
		printf("Enter total credits:");
		scanf_s("%lf", &cr);
		printf("Enter credit limit:");
		scanf_s("%lf", &cl);
		ba = bb + ch - cr;
		printf("Account:%d\n", ac);
		printf("Credit limit:%.2lf\n", cl);
		printf("Balance:%.2lf\n", ba);
		if (ba >= cl)
		{
			printf("Credit Limit Exceeded\n");
		}
	}
	system("pause");
	return 0;
}