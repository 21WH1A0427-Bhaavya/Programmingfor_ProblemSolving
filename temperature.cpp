#include <stdio.h>
int main()
{
	float celsius,C,fahreinheit,F;
	printf("ENTER TEMPERATURE IN CELSIUS =");
	scanf("%f",&celsius);
	printf("\nENTER TEMPERATURE IN FAHREINHEIT =");
	scanf("%f",&fahreinheit);
	C=(fahreinheit-32)*5/9;
	
	F=(celsius*9/5)+32;
	
	printf("CELSIUS=%f",C);
	printf("\nFAHREINHEIT=%f",F);
}
