///matrix multiplication ,addition ,traspose//
#include <stdio.h>
int main()
{
	int a[10][10], b[10][10], c[10][10];
	int i,j,k,m,n,p,q,sum;
	printf("\nEnter the order of the matrix A : ");
	scanf("%d%d",&m,&n);
	printf("\nEnter the elements of Matrix A: ");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nEnter the order of the Matrix B : ");
	scanf("%d%d",&p,&q);
	printf("\nEnter the elements of the Matrix B : ");
	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	printf("\nMatrix A : \n\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf(" %d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("\nMatrix B : \n\n");
	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		{
			printf(" %d\t",b[i][j]);
		}
		printf("\n");
	}
	printf("\nMatrix Multiplication of A and B : \n\n");
	if(n!=p)
	{
		printf("Matrix Multiplication is not possible");
	}
	else
	{
		for(i=0;i<m;i++)
		{
			for(j=0;j<q;j++)
			{
				sum=0;
				for(k=0;k<m;k++)
				{
					sum+=(a[i][k]*b[k][j]);
				}
				c[i][j]=sum;
			}
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<q;j++)
		{
			printf(" %d\t",c[i][j]);
		}
		printf("\n");
	}
	printf("\nTranspose of Matrix A : \n\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf(" %d\t",a[j][i]);
		}
		printf("\n");
	}
	printf("\nTranspose of Matrix B : \n\n");
	for(i=0;i<q;i++)
	{
		for(j=0;j<p;j++)
		{
			printf(" %d\t",b[j][i]);
		}
		printf("\n");
	}
	printf("\nMatrix Addition : \n\n");
	if(m!=p||n!=q)
	{
		printf("\nMatrix ADDITION is not possible, choose two matrices of the same order.");
    }
    else
    {
    	for(i=0;i<m;i++)
    	{
    		for(j=0;j<n;j++)
    		{
    			c[i][j]=a[i][j]+b[i][j];
    			printf(" %d\t",c[i][j]);
			}
			printf("\n");
		}
	}
	
}
