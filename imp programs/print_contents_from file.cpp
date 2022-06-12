#include <stdio.h>
#include <stdlib.h>
int main()
{
	FILE *fptr;
	char filename[20], c;
	printf("Enter the file name : ");
	scanf("%s", &filename);
	fptr = fopen(filename, "r");
	if(fptr==NULL)
	{
		printf("cannot open the file");
	}
	c = fgetc(fptr);
	while(c != EOF)
	{
		printf("%c", c);
		c = fgetc(fptr);
	}
	fclose(fptr);
}
