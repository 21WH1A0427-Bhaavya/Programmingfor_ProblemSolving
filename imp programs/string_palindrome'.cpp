#include <stdio.h>
#include <string.h>
int main()
{
	char str[] = "mom";
	int lenght = strlen(str);
	int i;
	for(i=0; i<lenght; i++)
	{
		if(str[i] != str[lenght-i-1])
		{
			break;
		}
	}
	if(i>=(lenght-i-1))
	printf("the given string is a palindrome.");
	else
	printf("The given string is not a palindrome.");
	
}
