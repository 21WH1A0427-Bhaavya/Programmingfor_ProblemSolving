#include <stdio.h>
int main()
{
	int a[10], min, max, i, n;
	float sum, avg;
	printf("Enter the number of elements : ");
	scanf("%d", &n);
	printf("Enter the elements : ");
	for(i=0; i<n; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("\n\nThe given array elements are : ");
	for(i=0; i<n; i++)
	{
		printf("%d ", a[i]);
		sum = sum + a[i];
	}
	avg = sum/n;
	
	min = a[0];
	for(i=0; i<n; i++)
	{
		if(min>a[i])
		{
			min = a[i];
		}
		
	}
	max = a[0];
	for(i=0; i<n; i++)
	{
		if(max<a[i])
		{
			max = a[i];
		}
	}
	printf("The minimum, maximum and average of the given elements is %d, %d and %.2f", min, max, avg);
}
