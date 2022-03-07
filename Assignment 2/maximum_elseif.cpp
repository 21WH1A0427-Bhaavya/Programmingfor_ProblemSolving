#include <stdio.h>
int main()
{
	int i,num1,num2,num3;
	printf("Enter three integers : ");
	scanf("%d %d %d", &num1, &num2, &num3);
	if(num1!=num2 && num1!=num3 && num2!=num3)
	{
		if(num1>num2&&num1>num3)
	{
		if(num2>num3)
		printf("Ascending order of three integers : %d < %d < %d",num3,num2,num1);
		else
		printf("Ascending order of three integers : %d < %d < %d",num2,num3,num1);
	}
	else if(num2>num1&&num2&&num3)
	{
		if(num1>num3)
		printf("Ascending order of three integers : %d < %d < %d",num3,num1,num2);
		else
		printf("Ascending order of three integers : %d < %d < %d",num1,num3,num2);
	}
	else if(num3>num2&&num3>num1)
	{
		if(num1>num2)
		printf("Ascending order of three integers : %d < %d < %d",num2,num1,num3);
		else
		printf("Ascending order of three integers : %d < %d < %d",num1,num2,num3);
	}
	}
    else
    {
    	if(num1==num2 && num1==num3 && num2 == num3)
    	printf("The given numbers are equal");
    	else if(num1==num2 && num1!=num3)
    	{
    		if(num1>num3)
    		printf("Ascending order of three integers : %d < %d = %d",num3,num2,num1);
    		else
    		printf("Ascending order of three integers : %d = %d < %d",num1,num2,num3);
		}
		else if(num1==num3 && num1!=num2)
		{
			if(num1>num2)
			printf("Ascending order of three integers : %d < %d = %d",num2,num3,num1);
			else
			printf("Ascending order of three integers : %d = %d < %d",num1,num3,num2);
		}
		else if(num2==num3 && num2!=num1)
		{
			if(num2>num1)
			printf("Ascending order of three integers : %d < %d = %d",num1,num2,num3);
			else
			printf("Ascending order of three integers : %d = %d < %d",num3,num2,num1);
		}
    	
	}
}
