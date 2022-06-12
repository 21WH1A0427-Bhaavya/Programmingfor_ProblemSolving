#include <stdio.h>
int LinearSearch(int a[], int n, int key)
{
	int i;
	for(i=0; i<n; i++)
	{
		if(a[i] == key)
		return i;
	}
	return -1;
}
int main()
{
	int a[10], n, i, key, result;
	printf("Enter the number of elements : ");
	scanf("%d", &n);
	printf("Enter the elements : ");
	for(i=0; i<n; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("Enter the key element : ");
	scanf("%d", &key);
	result = LinearSearch(a,n,key);
	if(result == -1)
	printf("Key %d is not present in list\n", key);
	else
	printf("Key %d is present at index %d\n", key, result);
}
