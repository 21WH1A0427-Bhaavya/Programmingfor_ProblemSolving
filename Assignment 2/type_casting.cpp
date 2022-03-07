#include <stdio.h>
int main()
{
	int num,principle,months;
	char ch;
	float sum,rate,SI;
	printf("Enter a number : ");
	scanf("%d",&num);
	printf("Enter a character : ");
	scanf(" %c",&ch);
	sum = num + ch;
	printf("Sum of number (%d) and ASCII value of character (%d) is : %0.2f",num,ch,sum);
	printf("\nPrinciple : "); //Calucating Simple Interest - example for explicit type conversion
	scanf("%d",&principle);
	printf("Rate : ");
	scanf("%f",&rate);
	printf("Time period in months : ");
	scanf("%d",&months);
	SI = (float)(principle*(rate/100)*months);
	printf("Simple Interest : %0.3f",SI);
}
