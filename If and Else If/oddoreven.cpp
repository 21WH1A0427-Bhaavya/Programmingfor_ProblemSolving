#include<stdio.h>
int main()
{
	int x,y;
	printf("\nENTER THE VALUE OF X =");
	scanf("%d",&x);
	y=x%2;
	
	if(y!=0)
	printf("\n%d IS AN ODD NUMBER",x);
	else
	printf("\n%d IS AN EVEN NUMBER",x);
	
}
