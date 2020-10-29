#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	double b;
	double c;
	double a;
	double d;
	double e=10;
	double f;
	int i;

	for (i = 0; i < 5; i++)
	{
		printf("%.2lf", e);
		printf("%");
		printf("\n");
		e += 0.5;
	}


	return 0;
}