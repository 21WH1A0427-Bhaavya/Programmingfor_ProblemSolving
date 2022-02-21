#include<stdio.h>
main()
{
	int a;
	printf("\nENTER THE VAUE OF A =");
	scanf("%d",&a);
	
	if(a%5==0&&a%7==0)
	printf("\n%d is divisible be both 5 and 7",a);
	if(a%5==0)
	printf("\n%d is divisible by 5 ",a);
	if(a%7==0)
	printf("\n%d is divisible by 7",a);
	if(a%5!=0&&a%7!=0)
	printf("\n%d is neither divisible by 5 nor 7",a);
}
