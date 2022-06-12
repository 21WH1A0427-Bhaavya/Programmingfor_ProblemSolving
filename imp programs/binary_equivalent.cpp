// (num%2) + 10 * binary(num/2)
#include <stdio.h>
int main()
{
	int a[225], i, num;
	printf("Enter the number : ");
	scanf("%d", &num);
	while(num>0)
	{
		a[i] = num%2;
		num = num/2;
		i++;
	}
	for(i=i-1; i>=0; i--)
	{
		printf("%d", a[i]);
	}
	
}
