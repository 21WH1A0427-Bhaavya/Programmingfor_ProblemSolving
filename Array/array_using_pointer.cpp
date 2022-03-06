#include <stdio.h>
int main()
{
	int A[10],n,*ptr = NULL,i;
	ptr = A;
	printf("Enter the number of array elements : ");
	scanf("%d",&n);
	printf("Enter the array elements : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",ptr++);
	}
	ptr=A;
	for(i=0;i<n;i++)
	{
		printf("%d\n",*ptr++);
	}
}
