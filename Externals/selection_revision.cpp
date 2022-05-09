#include <stdio.h>
int Selection(int a[], int n);
int print(int a[], int n);
int main()
{
	int a[10], n, i;
	printf("Enter the number of array elements : ");
	scanf("%d", &n);
	printf("Enter the array elements : ");
	for(i=0; i<n; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("Sorted elements : \n");
	Selection(a,n);
	print(a,n);
}
int Selection(int a[], int n)
{
	int i, j, min, temp;
	for(i=0; i<n-1; i++)
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
int print(int a[], int n)
{
	int i; 
	for(i=0; i<n; i++)
	{
		printf("%d ", a[i]);
	}
}
