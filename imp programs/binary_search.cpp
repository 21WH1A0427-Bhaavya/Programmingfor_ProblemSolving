#include <stdio.h>
int BinarySearch(int a[], int n, int low, int high, int key)
{
	int i, mid = (low+(high-1))/2;
	for(i=0; i<n; i++)
	{
		if(a[mid] == key)
		return mid;
		else if(a[mid]>key)
		return BinarySearch(a,n,low,mid-1,key);
		else
		return BinarySearch(a,n,mid+1,high,key);
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
	result = BinarySearch(a,n,0,n-1,key);
	if(result == -1)
	printf("Key %d is not present in list\n", key);
	else
	printf("Key %d is present at index %d\n", key, result);
}
