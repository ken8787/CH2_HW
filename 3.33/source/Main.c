#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	char sign = '+';
	char sign2 = ' ';
	int i, j;
	int q, t;
	scanf_s("%d", &q);
	scanf_s("%d", &t);


	for (i = 0; i < q; i++)
	{
		for (j = 0; j < t; j++)
		{
			if ((i == 0) || (i == q-1) || (j == 0) || (j == t-1))
			{
				printf("%c", sign);
			}
			else
			{
				printf("%c", sign2);
			}
		}
		printf("\n");
	}



	return 0;
}