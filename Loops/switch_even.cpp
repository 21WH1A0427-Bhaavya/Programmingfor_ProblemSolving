#include <stdio.h>
main()
{
	int n;
	printf("Enter the value of integer : ");
	scanf("%d", &n);
	switch (n % 2 == 0)
	{
		case 1:
			printf("\nThe given integer is even");
			break;
		default:
			printf("\nThe given integer is odd");
	}
}
