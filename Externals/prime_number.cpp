#include <stdio.h>
int main()
{
	int count, num, i;
	printf("Enter the number : ");
	scanf("%d", &num);
	if(num==0)
	{
		printf("0 is neither prime nor composite number\n");
		return 0;
	}
	for(i=1; i<=num; i++)
	{
		if(num%i == 0)
		count++;
	}
	if(count == 2)
	printf("The given number %d is a prime number", num);
	else
	printf("The given number %d is a not prime number", num);
	
}
