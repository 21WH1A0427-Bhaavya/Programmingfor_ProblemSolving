#include <stdio.h>
main()
{
	int num,rev=0,rem;
	printf("\nEnter the number : ");
	scanf("%d",&num);
	while(num!=0)
	{
		rem=num%10;
		rev=rev*10+rem;
		num/=10;
	}
	printf("The given number is reverse order is : %d",rev);
}
