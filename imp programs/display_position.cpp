#include <stdio.h>
#include <string.h>
int position(char [], char);
int main()
{
	char a[10], ch;
	printf("Enter the string : ");
	gets(a);
	printf("Enter the character in string : ");
	scanf("%c", &ch);
	int result = position(a,ch);
	if(result != 0)
	printf("The character %c is found in position : %d", ch, result);
	else
	printf("The character %c is not found", ch);
	
	return 0;
}
int position(char a[], char ch)
{
	int lenght = strlen(a), i;
	for(i = 0; i<lenght; i++)
	{
		if(a[i]==ch)
		{
			return i+1;
		}
	}
	return 0;
}
