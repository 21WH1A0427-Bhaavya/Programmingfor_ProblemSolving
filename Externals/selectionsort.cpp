#include <stdio.h>
int Selection(int [], int);
int main()
{
	int a[10], i, j, n;
	printf("Enter the number of array elements : ");
	scanf("%d", &n);
	printf("Enter the elements : ");
	for(i=0; i<n; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("The sorted elements are : ");
	Selection(a,n);
	for(i=0; i<n; i++)
	{
		printf("%d ", a[i]);
	}
}
int Selection(int a[], int n)
{
	int i, j, min, temp;
	for(i=0; i<n; i++)
	{
		min = i;
		for(j=i+1; j<n; j++)
		{
			if(a[min]>a[j])
			{
				min = j;
			}
		}
		temp = a[min];
		a[min] = a[i];
		a[i] = temp;
	}
}
