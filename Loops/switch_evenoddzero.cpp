#include <stdio.h>
main()
{
	int number;
	printf("\nEnter the number :");
	scanf("%d",&number);
	
	switch(number != 0)
	{
	
		case 1:
			if(number % 2 == 0)
			printf("The given number is even");
			else
			printf("The given number is odd");
			break;
			
		default:
			printf("The number is zero");
			
	}
}
