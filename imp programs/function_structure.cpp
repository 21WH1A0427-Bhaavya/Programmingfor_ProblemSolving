#include <stdio.h>
typedef struct Complex
{
	float real;
	float imaginary;
} complex;

void add(complex c1, complex c2, complex *result);
int main()
{
	complex c1, c2, result;
	
	printf("Enter real part of first number : ");
	scanf("%f", &c1.real);
	printf("Enter imaginary part of first number : ");
	scanf("%f", &c1.imaginary);
	
	printf("Enter the real part of second number : ");
	scanf("%f", &c2.real);
	printf("Enter the imaginary part of second number : ");
	scanf("%f", &c2.imaginary);
	
	add(c1, c2, &result);
	printf("\n Result.real = %.1f\n", result.real);
	printf("Result.imaginary = %.1f", result.imaginary);
	
	return 0;
}
void add(complex c1, complex c2, complex *result)
{
	result->real = (c1.real + c2.real);
	result->imaginary = (c1.imaginary + c2.imaginary);
}

