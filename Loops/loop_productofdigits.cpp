#include <stdio.h>
main()
{
	int num,product=1,digit;
	printf("\nEnter the number : ");
	scanf("%d",&num);
	while(num>0)
	{
		digit = num % 10;
		product *= digit;
		num /= 10;
	}
	printf("\nProduct of digits of given number is %d",product);
}
