#include <stdio.h>
#include <string.h>
int main()
{
	char a[50], ch;
	printf("Enter the string : ");
	gets(a);
	printf("Enter the character to be removed : ");
	ch = getchar();
	int i, j, lenght;
	lenght = strlen(a);
	for(i=0; i<lenght; i++)
	{
		if(a[i] == ch)
		{
			for(j=i; j<lenght; j++)
			{
				a[j] = a[j+1]; //replacing
			}
		}
	}
	printf("The new string is : %s", a);
}
