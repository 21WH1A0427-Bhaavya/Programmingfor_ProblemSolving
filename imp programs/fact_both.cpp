#include <stdio.h>
/*int main()
{
	int num, i, fact=1;
	printf("Enter the number : ");
	scanf("%d", &num);
	for(i=num; i>0; i--)
	{
		fact = fact * i;
	}
	printf("factorial is %d", fact);
}*/
int factorial(int num)
{
	if(num == 0 || num == 1)
	return 1;
	else
	return num*factorial(num-1);
}
int main()
{
	int num, fact;
	printf("Enter the number : ");
	scanf("%d", &num);
	fact=factorial(num);
	printf("Factorial of %d is %d", num, fact);
}
