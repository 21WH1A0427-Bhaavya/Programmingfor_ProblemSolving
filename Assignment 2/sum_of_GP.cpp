#include <stdio.h>
#include <math.h>
int main()
{
	int x,n,sum=0,i;
	printf("Enter variable x : ");
	scanf("%d",&x);
	printf("Enter the value of n (limit) : ");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		sum += pow(x,i);
	}
	printf("Sum of Geometric Progression : %d",sum);
}
