#include<stdio.h>
main()
{
	char x;
	printf("\nENTER X =");
	scanf("%c",&x);
	
	if(x>=65&&x<=90)  //ASCII VALUES
	printf("the given character is an uppercase alphabet");
	if(x>=97&&x<=122)
	printf("the given character is a lower case variable");
	
	
}
