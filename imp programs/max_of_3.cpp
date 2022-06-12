#include <stdio.h>
int main()
{
	int a, b, c;
	printf("Enter three values : ");
	scanf("%d%d%d", &a, &b, &c);
	if(a>b && a>c)
	{
		printf("%d is max\n", a);
		if(c>b)
		printf("%d is min\n", b);
		else
		printf("%d is min\n", c);
	}
	else if(b>a && b>c)
	{
		printf("%d is max\n", b);
		if(a>c)
		printf("%d is min\n", c);
		else
		printf("%d is min\n", a);
	}
	else if(c>b && c>a)
	{
		printf("%d is max\n", c);
		if(b>a)
		printf("%d is min\n", a);
		else
		printf("%d is min\n", b);
	}
}
