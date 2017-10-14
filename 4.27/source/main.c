#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int side1, side2, side3;//a,b,c;a^2+b^2=c^2
	for (side3 = 1; side3 <= 500 ; side3++)
	{
		for (side2 = 1; side2 <= side3 ; side2++)
		{
			for (side1 = 1; side1 <= side2 ; side1++)
			{
				if ( (side1*side1) + (side2*side2) == (side3*side3) )
				{
					printf("%4d%4d%4d	", side1, side2, side3);
				}
			}
		}
	}
	system("pause");
	return 0;	
}
	
	
