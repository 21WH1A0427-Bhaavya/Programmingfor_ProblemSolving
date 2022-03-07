#include <stdio.h>
int main()
{
	int a[10][10],i,j,rows,columns;
	printf("Enter the rows and columns of the matrix : ");
	scanf("%d %d", &rows, &columns);
	printf("Enter the elements of the matrix : ");
	for(i=0;i<rows;i++)
	{
		for(j=0;j<columns;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Given Matrix : \n");
	for(i=0;i<rows;i++)
	{
		for(j=0;j<columns;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
}
