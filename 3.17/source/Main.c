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

	printf("Enter account number (-1 to end ):\n");
	scanf_s("%lf", &a);
	printf("Enter beginning balance:\n");
	scanf_s("%lf", &b);
	printf("Enter total charge:\n");
	scanf_s("%lf", &c);
	printf("Enter total credits:\n");
	scanf_s("%lf", &d);
	printf("Enter credit limit:\n");
	scanf_s("%lf", &e);

	f = b + c - d;

	if (f > e)
	{
		printf("Account:\t");
		printf("%lf\n", a);
		printf("Credit limit:\t");
		printf("%lf\n", e);
		printf("Balance:\t");
		printf("%lf\n", f);
		printf("Credit Limit Exceeded");

	}

	return 0;
}