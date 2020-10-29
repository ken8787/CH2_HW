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

	printf("Enter # of hours worked (-1 to end ): ");
	scanf_s("%lf", &a);
	printf("Enter hourly rate of worker: ");
	scanf_s("%lf", &b);

	if (a > 40)
	{
		a += 0.5;
		f = b * a;
		printf("Salary is: ");
		printf("%.2lf", f);

	}
	else
	{
		f = b * a;
		printf("Salary is: ");
		printf("%.2lf", f);
	}
	


	return 0;
}