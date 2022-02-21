#include <stdio.h>
#include<conio.h>
#include<process.h>
int main()
{
	int a[10][10],b[10][10],c[10][10];
	int m,n,p,q,i,j,k,sum;
	printf("\nEnter the order of Matrix A : ");
	scanf("%d%d",&m,&n);
	printf("\nEnter the elements of Mtrix A : ");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	printf("\nEnter the order of Matrix B : ");
	scanf("%d%d",&p,&q);
	printf("\nEnter the elements of Matrix B : ");
	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		{
			scanf("%d", &b[i][j]);
		}
	}
	printf("\nMatrix A :\n\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
	printf("\nMatrix B :\n\n");
	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		{
			printf("%d\t", b[i][j]);
		}
		printf("\n");
	}
	if(n!=p)
	{
		printf("\nMatrix Multiplication is not possible");
	}
	else
	{
		for(i=0;i<m;i++)
		{
			for(j=0;j<q;j++)
			{
			 sum=0;
			 {
				for(k=0;k<m;k++)
				{
					sum+=(a[i][k]*b[k][j]);
				}
				c[i][j]=sum;
			 }
		    }
		}
	}
	printf("\nMatrix Multiplication of A and B is :\n\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<q;j++)
		{
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
}
