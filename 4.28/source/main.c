#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int x;//�N�X
	int a = 300;//�g�z�T�w�P�~
	int b = 5;//���~
	double c;//�`�~��
	int d = 200;//������u�g�~
	double e;//�����u��g�P���`�B
	int f;//�s�u��g���
	double g = 2.5;//�s�u�C����B
	double h;//���~�u�g�u�@�ɼ�
	printf("�п�J�N�X:1.�g�z 2.���~�u 3.����� 4.�s�u\n");
	while ((x = getchar()) != EOF)
	{
		switch (x) 
		{
			case '1':
				printf("�g�~:%d\n", a);
				break;
			case '2':
				printf("���~:%d\n",b);
				printf("�g�u�@�ɼ�:");
				scanf_s("%lf", &h);
				if (h > 40)
				{
					c = (double)b * 40 + (h - 40) * b *1.5;
				}
				else
				{
					c = (double)b * h;
				}
				printf("�g�~:%.2f\n", c);
				break;
			case '3':
				printf("��g�P���`�B:");
				scanf_s("%lf", &e);
				c = d + 0.057 * e;
				printf("�g�~:%.2lf\n", c);
				break;
			case '4':
				printf("��g���:");
				scanf_s("%d", &f);
				c = f * g;
				printf("�g�~:%.2lf\n", c);
				break;
			case '\n':
				break;
			default:
				printf("�Э��s��J�N�X\n");
				break;
		}
	}
	system("pause");
	return 0;
}