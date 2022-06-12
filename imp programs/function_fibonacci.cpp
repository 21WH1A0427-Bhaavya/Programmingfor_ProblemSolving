#include <stdio.h>
int fib(int number)
{
	if(number == 1)
	return 0;
	else if(number == 2)
	return 1;
	else
	return fib(number - 2) + fib(number - 1);
}
int main()
{
	int number, result;
	printf("Enter n : ");
	scanf("%d", &number);
	result=fib(number);
	printf("The %dth term of Fibonacci series is : %d", number, result);
	return 0;
}
