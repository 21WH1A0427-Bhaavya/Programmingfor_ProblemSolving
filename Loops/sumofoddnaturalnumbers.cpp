#include <stdio.h>
main()
{
	int num,n,sum=0;
	printf("\nENTER THE END VALUE : ");
	scanf("%d",&n);
	for(num=1; num<=n; num+=2)
	{
		sum+=num;
	}
	printf("Sum of all even natural numbers from 1 to %d is %d",n,sum);
}
