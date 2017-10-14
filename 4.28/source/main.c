#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int x;//代碼
	int a = 300;//經理固定周薪
	int b = 5;//時薪
	double c;//總薪水
	int d = 200;//抽佣金工週薪
	double e;//佣金工當週銷售總額
	int f;//零工當週件數
	double g = 2.5;//零工每件金額
	double h;//時薪工週工作時數
	printf("請輸入代碼:1.經理 2.時薪工 3.抽佣金 4.零工\n");
	while ((x = getchar()) != EOF)
	{
		switch (x) 
		{
			case '1':
				printf("週薪:%d\n", a);
				break;
			case '2':
				printf("時薪:%d\n",b);
				printf("週工作時數:");
				scanf_s("%lf", &h);
				if (h > 40)
				{
					c = (double)b * 40 + (h - 40) * b *1.5;
				}
				else
				{
					c = (double)b * h;
				}
				printf("週薪:%.2f\n", c);
				break;
			case '3':
				printf("當週銷售總額:");
				scanf_s("%lf", &e);
				c = d + 0.057 * e;
				printf("週薪:%.2lf\n", c);
				break;
			case '4':
				printf("當週件數:");
				scanf_s("%d", &f);
				c = f * g;
				printf("週薪:%.2lf\n", c);
				break;
			case '\n':
				break;
			default:
				printf("請重新輸入代碼\n");
				break;
		}
	}
	system("pause");
	return 0;
}