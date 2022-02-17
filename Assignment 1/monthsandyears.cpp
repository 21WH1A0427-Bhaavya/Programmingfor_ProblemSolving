#include <stdio.h>
int main()
{
	int x,daysinyear=365,daysinmonth=30;
	float year,month,day;
	printf("ENTER INTEGER X VALUE =");
	scanf("%d",&x);
	
	year=x/daysinyear;
	month=x/daysinmonth;
	day=x/1;
	
	printf("%f years, %f months, %f days",year,month,day);
	
}
