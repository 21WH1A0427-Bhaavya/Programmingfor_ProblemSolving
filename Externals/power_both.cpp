#include <stdio.h>
#include <math.h>
int main()
{
	int num, power, result=1;
	printf("Enter the base number : ");
	scanf("%d", &num);
	printf("Enter the power : ");
	scanf("%d", &power);
	int a = power;
	while(a != 0)
	{
		result = result * num;
		--a;
	}
	printf("%d^%d = %d", num, power, result);
	return 0;
}
/*int Power(int num, int power);
int main()
{
	int num, power, result;
	printf("Enter the base number : ");
	scanf("%d", &num);
	printf("Enter the power : ");
	scanf("%d", &power);
	result = Power(num, power);
	printf("%d^%d = %d", num, power, result);
}
int Power(int num, int power)
{
	if(power!=0)
	return num*Power(num, power-1);
	else
	return 1;
}*/
