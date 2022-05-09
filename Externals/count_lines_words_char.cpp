#include <stdio.h>
#include <string.h>
int main()
{
	char str[50];
	int words=0, characters=0, lines=0, i;
	printf("Enter the string terminated by ~ : ");
	scanf("%[^~]", str);
	for(i=0; str[i]!='\0'; i++)
	{
		if(str[i] == '\n')
		{
			lines++;
			words++;
		}
		else
		{
			if(str[i] == ' '||str[i] == '\t')
			{
				words++;
				characters++;
			}
			else
			{
				characters++;
			}
		}
	}
	printf("The number of characters = %d, words = %d and lines = %d", characters, words, lines);
}
