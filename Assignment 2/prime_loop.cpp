#include <stdio.h>
main()
{
	int num,i,count=0;
	printf("Enter the number : ");
	scanf("%d",&num);
	if(num == 0 || num == 1)
	count = 1;
	for(i=2;i<=num/2;++i)
	{
		if(num%2 == 0)
		{
			count = 1;
			break;
		}
	}
	if(count == 0)
	printf("\n%d is a prime number",num);
	else
	printf("\n%d is not a prime number", num);
}
