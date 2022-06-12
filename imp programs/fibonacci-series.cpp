#include <stdio.h>
int main()
{
	int fib1=0, fib2=1, fib3, i, n;
	printf("Enter the number of fibonacci terms : ");
	scanf("%d", &n);
	printf("Fibonacci series : %d %d ", fib1, fib2);
	for(i=2; i<n; i++)
	{
		fib3 = fib1 + fib2;
		printf("%d ", fib3);
		fib1 = fib2;
		fib2 = fib3;
	}
}
