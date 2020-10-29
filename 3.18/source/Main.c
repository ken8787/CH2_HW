#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	double b;
	double c;
	double a;
	double d;
	double e;
	double f;

	printf("Enter sales in dollars (-1 to end ): ");
	scanf_s("%.2lf", &a);
	printf("salary is: ");
	f = 200 + a * 0.09;
	printf("%.2lf", f);
	

	return 0;
}