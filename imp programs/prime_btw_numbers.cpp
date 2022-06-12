#include <stdio.h>
int main()
{
	int start, end, count, i, j;
	printf("Enter the limits : ");
	scanf("%d %d", &start, &end);
	printf("Prime numbers between %d to %d are : ", start, end);
	for(i=start; i<=end; i++)
	{
		count = 0;
		for(j=1; j<=end; j++)
		{
			if(i%j==0)
			count++;
		}
		if(count == 2)
		printf("%d ", i);
	}
	
}
