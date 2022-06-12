#include <stdio.h>
#include <math.h>
int main()
{
	float a, b, c, dis, real, imag, r1, r2;
	printf("Enter the coefficients of x^2, x and constant term : ");
	scanf("%f %f %f", &a, &b, &c);
	dis = b*b - 4*a*c;
	if(dis == 0)
	{
		printf("\nThe roots are real and equal\n");
		r1 = r2 = -b/(2*a);
		printf("Roots are %.2f and %.2f\n", r1, r2);
	}
	else if(dis > 0)
	{
		printf("\nThe roots are real and distinct\n");
		r1 = (-b + sqrt(dis))/2*a;
		r2 = (-b - sqrt(dis))/2*a;
		printf("Roots are %.2f and %.2f\n", r1, r2);
	}
	else
	{
		printf("\nThe roots are imaginary\n");
		real = -b/(2*a);
		imag = sqrt(-dis)/2*a;
		printf("Roots are %.2f+%.2fi and %.2f-%.2fi\n", real, imag, real, imag);
	}
}
