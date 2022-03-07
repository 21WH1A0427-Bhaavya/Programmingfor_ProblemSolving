#include <stdio.h>
int main()
{
	int i,j,a[10][10],rows,columns;
	printf("Enter number of rows and columns of the matrix : ");
	scanf("%d %d",&rows,&columns);
	printf("Enter the elements of the matrix : ");
	for(i=0;i<rows;i++)
	{
		for(j=0;j<columns;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nGiven Matrix : \n\n");
	for(i=0;i<rows;i++)
	{
		for(j=0;j<columns;j++)
		{
			printf("  %d  ",a[i][j]);
		}
		printf("\n");
	}
	printf("\nTranspose of the given matrix : \n\n");
	for(i=0;i<columns;i++)
	{
		for(j=0;j<rows;j++)
		{
			printf("  %d  ",a[j][i]);
		}
		printf("\n");
	}
	
}
