#include <stdio.h>
int gcd(int n1, int n2)
{
	if(n1 % n2 == 0)
	return n2;
	else
	return gcd(n2, n1%n2);
}
int main()
{
	int number1, number2;
	printf("First number : ");
	scanf("%d", &number1);
	printf("Second number : ");
	scanf("%d", &number2);
	printf("Greatest common divisor of %d and %d is %d", number1, number2, gcd(number1, number2));
	return 0;
}
