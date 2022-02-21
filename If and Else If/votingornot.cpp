#include<stdio.h>
int main()
{
	int age;
	printf("\nENTER THE AGE OF INDIVIDUAL =");
	scanf("%d",&age);
	
	if(age>=18)
	printf("\nTHE INDIVIDUAL IS ELIGIBLE TO VOTE\n");
	else
	printf("\nTHE INDIVIDUAL IS NOT ELIGIBLE TO VOTE");
}
