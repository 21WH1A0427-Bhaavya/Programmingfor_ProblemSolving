#include <stdio.h>
main()
{
	float chem,phy,pps,percent;
	printf("ENTER THE MARKS SCORED OUT OF 100 IN CHEMISTRY, PHYSICS, PPS =");
	scanf("%f%f%f",&chem,&phy,&pps);
	percent=(chem+phy+pps)/3;
	printf("\nTOTAL PERCENTILE SCORED = %.1f",percent);
	
	if(percent>=90)
	{
		printf("\nGRADE A");
	}
	else if(percent>=80)
	{
		printf("\nGRADE B");
	}
	else if(percent>=70)
	{
		printf("\nGRADE C");
	}
	else if(percent>=60)
	{
		printf("\nGRADE D");
	}
	else if(percent>=40)
	{
		printf("\nGRADE E");
	}
	else
	printf("\nGRADE F");
}
