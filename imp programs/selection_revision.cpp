#include <stdio.h>
int SelectionSort(int a[], int n)
{
	int i, j, temp, min;
	for(i=0; i<n-1; i++)
	{
		min = i;
		for(j=i+1; j<n; j++)
		{
			if(a[min] > a[j])
			{
				min = j;
			}
		}
		temp = a[min];
		a[min] = a[i];
		a[i] = temp;
	}
}
int main()
{
	int a[10], n, i;
	printf("Enter the number of array elements : ");
	scanf("%d", &n);
	printf("Enter the elements : ");
	for(i=0; i<n; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("sorted array is : \n");
	SelectionSort(a,n);
	for(i=0; i<n; i++)
	{
		printf("%d\t", a[i]);
	}
}
