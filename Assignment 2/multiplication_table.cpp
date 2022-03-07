#include <stdio.h>
int main()
{
	int product,num,i,rows;
	printf("Enter a number : ");
	scanf("%d",&num);
	printf("Enter the number of rows : ");
	scanf("%d",&rows);
	for(i=1;i<=rows;i++)
	{
		product = num * i;
		printf("%d * %d = %d\n",num,i,product);
	}
}
