#include <stdio.h>
main()
{
	int num,n,d,mul;
	printf("\nEnter the number : ");
	scanf("%d", &num);
	printf("\nEnter the value till multipliaction can procced : ");
	scanf("%d",&d);
	for(n=1; n<=d; n++)
	{
		mul=num*n;
		printf("%d\n",mul);
	}
}
