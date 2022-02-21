#include <stdio.h>
main()
{
	int num,firstdigit,lastdigit,sum;
	printf("\nEnter the number : ");
	scanf("%d",&num);
	lastdigit= num%10;
	while(num>=10)
	{
		num/=10;
	}
	firstdigit=num;
	sum=firstdigit+lastdigit;
	printf("\nSum of first and last digits of the given number is %d", sum);
}
