#include <stdio.h>
main()
{
	int num,sum=0,digit;
	printf("\nEnter the number : ");
	scanf("%d",&num);
	while(num>0)
	{
		digit = num % 10;
		sum += digit;
		num /= 10;
	}
	printf("\nSum of digits of number %d id %d",num,sum);
}
