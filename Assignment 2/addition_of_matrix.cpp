#include <stdio.h>
int main()
{
	int a[10][10],b[10][10],c[10][10],i,j,rows1,columns1,rows2,columns2;
	printf("Enter the rows and columns of Matrix A : ");
	scanf("%d %d", &rows1,&columns1);
	printf("Enter the elements of Matrix A : ");
	for(i=0;i<rows1;i++)
	{
		for(j=0;j<columns1;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Matrix A : \n\n");
	for(i=0;i<rows1;i++)
	{
		for(j=0;j<columns1;j++)
		{
			printf("  %d  ", a[i][j]);
		}
		printf("\n");
	}
	printf("\nEnter the rows and columns of Matrix B : ");
	scanf("%d %d", &rows2, &columns2);
	printf("Enter the elements of Matrix B : ");
	for(i=0;i<rows2;i++)
	{
		for(j=0;j<columns2;j++)
		{
			scanf("%d", &b[i][j]);
		}
	}
	printf("Matrix B : \n\n");
	for(i=0;i<rows2;i++)
	{
		for(j=0;j<columns2;j++)
		{
			printf("  %d  ", b[i][j]);
		}
		printf("\n");
	}
	if(rows1!=rows2 || columns1!=columns2)
	{
		printf("\nMatrix Addition is not possible");
	}
	else
	{
		printf("\nMatrix addition of Matrix A and Matrix B : \n\n");
	
		for(i=0;i<rows1;i++)
		{
			for(j=0;j<columns1;j++)
			{
				c[i][j] = a[i][j] + b[i][j];
				printf("  %d  ", c[i][j]);
			}
		    printf("\n");
		}
	}
}
