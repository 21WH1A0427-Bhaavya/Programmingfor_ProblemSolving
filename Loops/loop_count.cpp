#include <stdio.h>
main()
{
	int num,count=0;
	printf("\nENETER THE NUMBER : ");
	scanf("%d",&num);
	while(num>0)
	{
		num /= 10;
		count += 1;
	}
	printf("\nNumber of digits in the given number is  : %d", count);
}
