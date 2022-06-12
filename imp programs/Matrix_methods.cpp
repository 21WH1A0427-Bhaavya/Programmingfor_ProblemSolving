#include <stdio.h>
int MatrixAdd(int a[][10], int b[][10], int m, int n, int p, int q)
{
	int i, j, c[10][10];
	if(m!=q || n!=p)
	{
		printf("Matrix Addition is not possible!\n");
	}
	else
	{
		for(i=0; i<m; i++)
		{
			for(j=0; j<n; j++)
			{
				c[i][j] = a[i][j] + b[i][j];
				printf("%d\t", c[i][j]);
			}
			printf("\n");
		}
	}
}
int MatrixMul(int a[][10], int b[][10], int m, int n, int p, int q)
{
	int i, j, k, c[10][10], sum;
	if(m!=q)
	{
		printf("Matrix Multiplication is not possible!\n");
	}
	else
	{
		for(i=0; i<m; i++)
		{
			for(j=0; j<q; j++)
			{
				sum = 0;
				for(k=0; k<m; k++)
				{
					sum += (a[i][k]*b[k][j]);
				}
				c[i][j] = sum;
			}
		}
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
int Transpose(int a[][10], int m, int n)
{
	int i, j;
	for(i=0; i<n; i++)
	{
		for(j=0; j<m; j++)
		{
			printf("%d\t", a[j][i]);
		}
		printf("\n");
	}
}
int main()
{
	int a[10][10], b[10][10], i, j, m, n, p, q;
	printf("\nEnter the order of Matrix A : ");
	scanf("%d %d", &m, &n);
	printf("\nEnter the elements of Matrix A : ");
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	printf("Matrix A : \n\n");
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
	printf("\nEnter the order of Matrix B : ");
	scanf("%d %d", &p, &q);
	printf("\nEnter the elements of Matrix B : ");
	for(i=0; i<p; i++)
	{
		for(j=0; j<q; j++)
		{
			scanf("%d", &b[i][j]);
		}
	}
	printf("Matrix B : \n\n");
	for(i=0; i<p; i++)
	{
		for(j=0; j<q; j++)
		{
			printf("%d\t", b[i][j]);
		}
		printf("\n");
	}
	printf("\n\nTranspose of Matrix A : \n\n");
	Transpose(a,m,n);
	printf("\n\nTranspose of Matrix B : \n\n");
	Transpose(b,p,q);
	printf("\n\nSum of matrices : \n\n");
	MatrixAdd(a,b,m,n,p,q);
	printf("\n\nProduct of matrices : \n\n");
	MatrixMul(a,b,m,n,p,q);
	return 0;
}

