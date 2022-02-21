#include <stdio.h>
int main()
{
	int age;
	printf("\nENTER age of the citizen:");
	scanf("%d",&age);
	
	if(age>=18)
	printf("THE CITIZEN IS ELIGIBLE FOR VOTING");
	else
	printf("THE CITIZEN IS NOT ELIGIBLE FOR VOTING");
	
}
