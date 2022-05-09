#include <stdio.h>
/*int gcd(int num1, int num2);
int main()
{
	int num1, num2, i, result;
	printf("Enter the two numbers : ");
	scanf("%d %d", &num1, &num2);
	result = gcd(num1,num2);
	printf("The greatest common divisor of %d and %d is %d", num1, num2, result);
	return 0;
}
int gcd(int num1, int num2)
{
	if(num1 % num2 == 0)
	return num2;
	else
	return gcd(num2, num1%num2);
}*/
int main()
{
	int num1, num2, temp1, temp2, rem;
	printf("Enter the two numbers : ");
	scanf("%d %d", &num1, &num2);
	temp1 = num1;
	temp2 = num2;
	while(temp2!=0)
	{
		rem = temp1 % temp2;
		temp1 = temp2;
		temp2 = rem;
	}
	printf("The greatest common divisor of %d and %d is %d", num1, num2, temp1);
	
}
	
