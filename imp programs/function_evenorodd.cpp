#include <stdio.h>
int evenorodd(int number);
int main()
{
	int number, result;
	printf("Enter a number : ");
	scanf("%d", &number);
	result = evenorodd(number);
	if(result == 0)
	printf("%d is an even number.", number);
	else
	printf("%d is an odd number.", number);
	return 0;
}
int evenorodd(int num)
{
	if(num % 2 == 0)
	return 0;
	else
	return 1;
}
