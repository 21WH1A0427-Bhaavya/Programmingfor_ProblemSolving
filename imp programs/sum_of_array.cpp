#include <stdio.h>
int sum(int arr[] , int n ,int start);
int main()
{
	int n,arr[30],i,result;
	printf("enter size of array : ");
	scanf("%d",&n);
	printf("enter array elements : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	result = sum(arr, n,0);
	printf("Sum of the array : %d", result);
}
int sum(int arr[],int n, int start)
{
	if(start>=n)
	return 0;
	
	return (arr[start] + sum(arr, n, start+1));
}

