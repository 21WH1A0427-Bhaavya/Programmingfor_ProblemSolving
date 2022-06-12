//SIMPLE INTEREST = P*T*(R/100)
//COMPOUND INTEREST = P( (1 + R/100)^t )
#include <stdio.h>
#include <math.h>
int main()
{
	int time;
	float principle, rate, SI, CI;
	printf("Enter the principle amount : ");
	scanf("%f", &principle);
	printf("Enter the rate : ");
	scanf("%f", &rate);
	printf("Enter the time period : ");
	scanf("%d", &time);
	SI = principle*(rate/100)*time;
	CI = principle*pow(1+rate/100,time);
	printf("Simple interest : %f\n", SI);
	printf("Coumpound interest : %f\n", CI);
}
