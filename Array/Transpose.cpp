//TRANSPOSE OF A MATRIX
#include <stdio.h>
int main()
{
	int a[10][10],i,j,m,n;
	printf("\nOrder of the Matrix : ");
	scanf("%d%d", &m,&n);
	printf("\nElements of the Matrix : ");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	printf("\nThe given Matrix is : \n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
	printf("\nTranspose of the Matrix is : \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%d\t",a[j][i]);
		}
		printf("\n");
	}
}
