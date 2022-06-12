#include <stdio.h>
int main()
{
	int num, i, n;
	printf("Enter the number : ");
	scanf("%d", &num);
	printf("Enter the n : ");
	scanf("%d", &n);
	printf("\nMULTIPLICATION OF %d TILL %d is : \n\n", num, n);
	for(i=1; i<=n; i++)
	{
		printf("%d x %d = %d\n", num, i, num*i);
	}
}
