#include<stdio.h>
main()
{
	char x;
	printf("\nENTER X =");
	scanf("%c",&x);
	
	if(x>=65&&x<=90)  //ASCII VALUES
	printf("the given character is an uppercase alphabet");
	else if(x>=97&&x<=122)
	printf("the given character is a lower case variable");
	else
	printf("the given character is not an alaphabet");
	
	
}
