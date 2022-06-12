#include <stdio.h>
int factorial(int number);
int main()
{
	int number, result;
	printf("Enter the number : ");
	scanf("%d", &number);
	result = factorial(number);
	printf("Factorial of %d is : %d", number, result);
	return 0;
}
int factorial(int number)
{
	if(number==0 || number==1)
		return 1;
	else
		return number*factorial(number-1);
}

