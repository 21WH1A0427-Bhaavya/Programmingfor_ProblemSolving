#include <stdio.h>
int Linear(int [], int , int);
int main()
{
	int a[10], n, i, key, index;
	printf("Enter the number of elements : ");
	scanf("%d", &n);
	printf("Enter the elements : ");
	for(i=0; i<n; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("Enter the key element : ");
	scanf("%d", &key);
	index = Linear(a,n,key);
	if(index!=0)
	printf("\nThe key element is present at index %d", index);
	else
	printf("\nThe key element is not found in the given array");
	return 0;
}
int Linear(int a[], int n, int key)
{
	int i;
	for(i=0; i<n; i++)
	{
		if(a[i]==key)
		return i;
	}
	return 0;
}
