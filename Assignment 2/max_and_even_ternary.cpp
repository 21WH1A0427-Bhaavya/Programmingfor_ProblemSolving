#include <stdio.h>
int main()
{
	int a,b;
	printf("Enter two integers : ");
	scanf("%d %d", &a, &b);
	(a>b)?printf("\n%d is greater than %d",a,b):printf("\n%d is greater than %d",b,a);
	(a%2==0)?printf("\n%d is even",a):printf("\n%d is odd",a);
	(b%2==0)?printf("\n%d is even",b):printf("\n%d is odd",b);
}
