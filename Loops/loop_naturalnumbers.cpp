#include <stdio.h>
main()
{
	int num,n;
	printf("Enter the limit value : ");
	scanf("%d",&n);
	printf("All natural numbers from 1 to %d : \n",n);
	num = 1;
	while(num<=n)
	{
		printf("%d\n",num);
		num++;
	}

}
