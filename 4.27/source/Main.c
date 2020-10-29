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

	printf("Enter side1: ");
	scanf_s("%lf", &a);
	printf("Enter side2: ");
	scanf_s("%lf", &b);
	printf("Enter hypotenuse: ");
	scanf_s("%lf", &c);

	f = a * a + b * b;
	if (f==c*c)
	{

		printf("it is pythagorean triple ");
		
	}
	else
	{
		
		printf("it is not pythagorean triple ");
		
	}



	return 0;
}