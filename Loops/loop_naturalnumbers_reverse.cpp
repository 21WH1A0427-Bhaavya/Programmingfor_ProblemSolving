#include <stdio.h>
main()
{
	int num,n;
	printf("Enter the limit value : ");
	scanf("%d",&n);
	printf("All natural numbers from  %d to 1 : \n", n);
	num = n;
	while(num<=n&&num>=1)
	{
		printf("%d\n",num);
		num--;
	}

}
