#include <stdio.h>
int main()
{
	char ch;
	int num1,num2;
	printf("Enter two integer operands : ");
	scanf("%d %d",&num1,&num2);
	printf("Enter the operand : ");
	scanf(" %c",&ch);
	switch(ch)
	{
		case '+':
			printf("%d %c %d = %d",num1,ch,num2,num1+num2);
			break;
		case '-':
			printf("%d %c %d = %d",num1,ch,num2,num1-num2);
			break;
		case '*':
			printf("%d %c %d = %d",num1,ch,num2,num1*num2);
			break;
		case '/':
			printf("%d %c %d = %f",num1,ch,num2,(float)num1/num2);
			break;
		case '%':
			printf("%d %c %d = %d",num1,ch,num2,num1%num2);
			break;
		default:
			printf("Invalid Operator\n");
	}
}
