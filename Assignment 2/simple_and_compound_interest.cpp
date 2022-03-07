#include <stdio.h>
#include <math.h>
int main()
{
	float principle,time,rate,SI,CI;
	printf("Enter the principle : ");
	scanf("%f",&principle);
	printf("Enter the rate : ");
	scanf("%f",&rate);
	printf("Enter the time period (in months) : ");
	scanf("%f",&time);
	SI = principle*(rate/100)*time;
	CI = principle * ( pow( (1 + rate/100) , time ) - 1);
	printf("\nSimple Interest : %0.3f",SI);
	printf("\nCoumpound Interest : %0.3f",CI);
}
