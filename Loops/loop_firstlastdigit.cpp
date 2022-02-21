#include<stdio.h>
main()
{
	int num,firstdigit, lastdigit;
	printf("\nEnter the number : ");
	scanf("%d",&num);
	lastdigit = num % 10;
	while(num >=10)
	{
		num /= 10;
	}
	firstdigit = num; 
	printf("First digit and Lst digit of the given number are %d and %d respectively",firstdigit,lastdigit);
}
