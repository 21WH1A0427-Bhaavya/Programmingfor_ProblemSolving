#include <stdio.h>
main()
{
	int num,originalnum,result=0,rem;
	printf("\nEnter the number : ");
	scanf("%d",&num);
	originalnum=num;
	while(originalnum>0)
	{
		rem=originalnum%10;
		result+=rem*rem*rem;
		originalnum/=10;
	}
	if(result==num)
	{
		printf("%d is an Armstrong number",num);
	}
	else
	printf("%d is not an Armstrong number",num);
}
