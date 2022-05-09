#include <stdio.h>
int BubbleSort(int [], int);
int main()
{
	int i, a[10], n;
	printf("Enter the number of elements : ");
	scanf("%d", &n);
	printf("Enter the elements : ");
	for(i=0; i<n; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("Sorted array elements are : ");
	BubbleSort(a,n);
	for(i=0; i<n; i++)
	{
		printf("%d ", a[i]);
	}
}
int BubbleSort(int a[], int n)
{
	int temp, i, j;
	for(i=0; i<n-1; i++)
	{
		for(j=i+1; j<n; j++)
		{
			if(a[i]>a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}
