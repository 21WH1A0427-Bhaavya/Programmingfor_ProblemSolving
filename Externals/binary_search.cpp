#include <stdio.h>
int Binary(int [], int , int, int, int);
int main()
{
	int a[10], n, i, key;
	printf("Enter the numbe of elements : ");
	scanf("%d", &n);
	printf("Enter the elements : ");
	for(i=0; i<n; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("Enter the key element : ");
	scanf("%d", &key);
	int result = Binary(a,n,0,n-1,key);
	printf("The element %d is found at index %d", key, result);
	return 0;
}
int Binary(int a[], int n, int low, int high, int key)
{
	int i, mid;
	mid = (low + high-1)/2;
	for(i=0; i<n; i++)
	{
		if(a[mid]==key)
		return mid;
		else if(a[mid]>key)
		return Binary(a,n,low,mid-1,key);
		else
		return Binary(a,n,mid+1,high,key);
	}
}
