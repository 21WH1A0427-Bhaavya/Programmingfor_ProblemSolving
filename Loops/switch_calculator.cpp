#include <stdio.h>
main()
{
	int num1,num2,add,sub,mul;
	float div;
	char op;
	printf("\nENTER OPERATOR : ");
	scanf("%c",&op);
	printf("\nENTER NUMBER 1 AND NUMBER 2 : ");
	scanf("%d %d",&num1,&num2);
	
	
	switch(op)
	{
		case '+':
			add = num1 + num2;
			printf("Addition of %d and %d is %d", num1, num2, add);
			break;
		case '-':
			sub = num1 - num2;
			printf("Subtraction of %d and %d is %d", num1, num2,sub);
			break;
		case '*':
			mul = num1*num2;
			printf("Multiplication of %d and %d is %d", num1, num2, mul);
			break;
		case '/':
			div = num1/num2;
			printf("Division of %d and %d is %f", num1,num2,div);
			break;
		default:
			printf("Invalid operator");
			
	}
}
