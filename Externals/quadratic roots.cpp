#include <stdio.h>
#include <math.h>
int main()
{
	double  a, b, c, d;
	double root1, root2, real, imag;
	printf("Enter coefficients of x^2 , x and constant term : ");
	scanf("%lf %lf %lf", &a, &b, &c);
	d = pow(b,2) - 4*a*c;
	if(d>0)
	{
		printf("The roots are real and distinct.\n");
		root1 = (-b + sqrt(d))/(2*a);
		root2 = (-b - sqrt(d))/(2*a);
		printf("The roots are %.2lf and %.2lf", root1, root2);
	}
	else if(d==0)
	{
		printf("The roots are real and equal.\n");
		root1 = root2 = -b/(2*a);
		printf("The roots are %.2lf and %.2lf", root1, root2);
	}
	else
	{
		printf("The roots are imaginary.\n");
		real = -b/(2*a);
		imag = sqrt(-d)/(2*a);
		printf("The roots are %.2lf+%.2lfi and %.2lf-%.2lfi", real, imag, real, imag);
	}
}
