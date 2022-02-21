#include <stdio.h>
int main()
{
	int a;
	printf("\nENTER VALUES OF A =");
	scanf("%d",&a);
	
	if(a>0&&a!=0)
	printf("\n%d is positive number",a);
	if(a<0)
	printf("\n%d is a negative number",a);
	if(a==0)
	printf("\n%d is neither positive nor negative",a);	
}
