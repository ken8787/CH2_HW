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

	printf("Enter loan principal (-1 to end ): ");
	scanf_s("%lf", &a);
	printf("Enter interest rate: ");
	scanf_s("%lf", &b);
	printf("Enter term of the loan in days: ");
	scanf_s("%lf", &c);

	printf("The interest charge is: ");
	f = a*b*c/365;
	printf("%.2lf", f);


	return 0;
}