#include <stdio.h>
int BubbleSort(int a[], int n);
int print(int a[], int n);
int main()
{
	int a[10], n, i;
	printf("Enter the number of array elements : ");
	scanf("%d", &n);
	printf("Enter the array elements : ");
	{
		for(i=0; i<n; i++)
		{
			scanf("%d", &a[i]);
		}
	}
	printf("Sorted elements : \n");
	BubbleSort(a, n);
	print(a, n);
}
int BubbleSort(int a[], int n)
{
	int i, j, temp;
	for(i=0; i<n-1; i++)
	{
		for(j=0; j<n-i-1; j++)
		{
			if(a[j]>a[j+1])
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;	
			}
		}
	}
}
int print(int a[], int n)
{
	int i;
	for(i=0; i<n; i++)
	{
		printf("%d ", a[i]);
	}
}
