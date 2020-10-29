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
	double g;
	double h;

	printf("Enter your code: ");
	scanf_s("%lf", &a);
	

	if (a == 1)
	{
		b = 40 * 100;
		printf("Salary is: ");
		printf("%.2lf", b);

	}
	else if (a == 2)
	{
		printf("Enter your working hours: ");
		scanf_s("%lf", &c);
		if (c > 40)
		{
			d = (c - 40)*1.5 + 40;
			e = d * 100;
			printf("Salary is: ");
			printf("%.2lf", e);
		}
		else
		{
			e = c * 100;
			printf("Salary is: ");
			printf("%.2lf", e);
		}
	}
	else if (a == 3)
	{
		f = 250 + 100 * 5.79 / 100;//利潤為100元
		printf("Salary is: ");
		printf("%.2lf", f);
	}
	else 
	{
		printf("Enter the items you produce: ");
		scanf_s("%lf", &g);
		g *= 100;//項目為100元
		printf("Salary is: ");
		printf("%.2lf", g);
	}



	return 0;
}