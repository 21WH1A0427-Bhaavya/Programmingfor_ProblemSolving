#include <stdio.h>
int main()
{
	int x,y;
	printf("\nEnter x,y value:");
	scanf("%d,%d",&x,&y);
	if(x>y&&x!=y)
	printf("x is largest number");
	else
	{
	 if(y>x && x!=y)
	printf("y is largest number");
}
printf("x and y are equal");
}
