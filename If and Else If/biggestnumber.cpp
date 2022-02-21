#include<stdio.h>
main()
{
	int a,b;
	printf("\nENTER THE VALUES OF A B =");
	scanf("%d%d",&a,&b);
	
	if(a>b&&a!=b)
	printf("\n%d is larger than %d",a,b);
	else if(a<b&&a!=b)
	printf("\n%d is larger than %d",b,a);
	else
	printf("\n%d is equal to %d",a,b);
}
