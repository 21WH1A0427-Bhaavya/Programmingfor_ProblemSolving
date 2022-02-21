#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],c[10][10];
	int i,j,m,n,p,q;
	printf("\nEnter the order of Matrix A : ");
	scanf("%d%d", &m, &n);
	printf("\nEnter the elements of Matrix A : ");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	printf("\nEnter the order of Matrix B : ");
	scanf("%d%d", &p,&q);
	printf("\nEnter the elements of Matrix B : ");
	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	printf("Matrix A : \n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
	printf("\nMatrix B : \n");
	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		{
			printf("%d\t", b[i][j]);
		}
		printf("\n");
	}
	if(m!=p||n!=q)
	{
		printf("\nMatrix Addition is not possible.");
	}
	else
	{
		printf("\nMatrix Adition of A and B : \n");
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				c[i][j]=(a[i][j]+b[i][j]);
				printf("%d\t",c[i][j]);
			}
			printf("\n");
		}
	}
}
