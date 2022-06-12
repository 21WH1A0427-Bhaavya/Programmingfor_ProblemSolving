#include <stdio.h>
int InsertString(char [], char [], int);
int StringLenght(char []);
int main()
{
	char a[] = "little sunshine";
	int result = InsertString(a,"miss ", 7);
	if(result!=-1)
	printf("The string is : %s", a);
	else
	printf("Not possible\n");
	return 0;
}
int InsertString(char a[], char b[], int position)
{
	int i, l1, l2;
	l1 = StringLenght(a);
	l2 = StringLenght(b);
	if(position>l1)
	return -1;
	for(i=l1; i>=position; i--)
	{
		a[i + l2] = a[i];
	}
	for(i=0; i<l2; ++i)
	{
		a[i+position] = b[i];
	}
	return 0;
}
int StringLenght(char arr[])
{
	int lenght = 0;
	while(arr[lenght] != '\0')
	{
		lenght++;
	}
	return lenght;
}
