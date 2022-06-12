#include <stdio.h>
int Prime(int a)
{
	int count = 0, i;
	for(i=1; i<=a; i++)
	{
		if(a%i == 0)
		{
			count++;
		}
	}
	if(count == 2)
	return 0;
	else
	return -1;
}
int main()
{
	int num, result;
	printf("Enter a number : ");
	scanf("%d", &num);
	result = Prime(num);
	if(result == 0)
	printf("PRIME");
	else
	printf("NOT PRIME");
	return 0;
}
