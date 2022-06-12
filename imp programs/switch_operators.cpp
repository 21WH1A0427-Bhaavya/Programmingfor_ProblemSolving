#include <stdio.h>
int main()
{
	char ch;
	int a, b;
	printf("Enter two numbers : ");
	scanf("%d %d", &a, &b);
	printf("Enter the operator (+,-,*,/,%%) : ");
	scanf(" %c", &ch);
	switch(ch)
	{
		case '+':
			printf("Addition of %d and %d is %d", a, b, a+b);
			break;
		case '-':
			printf("Differance of %d and %d is %d", a, b, a-b);
			break;
		case '*':
			printf("Product of %d and %d is %d", a, b, a*b);
			break;
		case '/':
			printf("Division of %d and %d is %.2f", a, b, (float)a/b);
			break;
		case '%':
			printf("Remainder of %d and %d is %d", a, b, a%b);
			break;
	}
}
