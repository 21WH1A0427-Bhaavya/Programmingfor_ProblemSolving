#include <stdio.h>
int Addition(int a[10][10], int b[10][10], int, int);
int main()
{
	int a[10][10], b[10][10], m, n, p, q, i, j;
	printf("Matrix A order : ");
	scanf("%d %d", &m, &n);
	printf("MATRIX A elements : ");
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	printf("Matrix B order : ");
	scanf("%d %d", &p, &q);
	printf("MATRIX B elements : ");
	for(i=0; i<p; i++)
	{
		for(j=0; j<q; j++)
		{
			scanf("%d", &b[i][j]);
		}
	}
	Addition(a,b,m,q);
	return 0;
}
int Addition(int a[10][10], int b[10][10], int m, int q)
{
	int i, j, c[10][10];
	if(m!=q)
	{
		printf("Matrix Multiplication is not possible.");
	}
	else
	{
		for(i=0; i<m; i++)
		{
			for(j=0; j<q; j++)
			{
				c[i][j] = a[i][j] + b[i][j];
			}
		}
	}
	printf("Matrix Addition : \n");
	for(i=0; i<m; i++)
	{
		for(j=0; j<q; j++)
		{
			printf("%d\t", c[i][j]);
		}
		printf("\n");
	}
}
