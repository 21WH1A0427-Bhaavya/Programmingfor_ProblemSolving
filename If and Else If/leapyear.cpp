#include<stdio.h>
main()
{
	int numberofdays;
	printf("\nENTER THE NUMBER OF DAYS IN A YEAR: ");
	scanf("%d",&numberofdays);
	
	if(numberofdays==366)
	printf("\nTHE YEAR IS LEAP YEAR");
	else
	printf("\nTHE YEAR IS NOT A LEAP YEAR");
	
}
