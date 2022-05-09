#include <stdio.h>
int Mul(int a[10][10], int b[10][10], int m, int q);
int main()
{
	int a[10][10], b[10][10], m, n, p, q, i, j, k;
	printf("Enter the order of Matrix A : ");
	scanf("%d %d", &m, &n);
	printf("Enter the elements : ");
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	printf("Enter the order of Matrix B : ");
	scanf("%d %d", &p, &q);
	printf("Enter the elements : ");
	for(i=0; i<p; i++)
	{
		for(j=0; j<q; j++)
		{
			scanf("%d", &b[i][j]);
		}
	}
	Mul(a,b,m,q);
}
int Mul(int a[10][10], int b[10][10], int m, int q)
{
	int c[10][10], sum, i, j, k;
	if(m!=q)
	{
		printf("Matrix multiplication is not possible.");
	}
	else
	{
		for(i=0; i<m; i++)
		{
			for(j=0; j<q; j++)
			{
				c[i][j]=0;
				for(k=0; k<m; k++)
				{
					c[i][j] = c[i][j] + a[i][k]*b[k][j];
				}
			}
		}
	printf("Matrix Multiplication : \n");
	for(i=0; i<m; i++)
	{
		for(j=0; j<q; j++)
		{
			printf("%d\t", c[i][j]);
		}
		printf("\n");
	}
}
}
