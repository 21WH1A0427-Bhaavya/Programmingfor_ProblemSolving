#include <stdio.h>
#include <string.h>
int main()
{
	int i, j, n;
	char name[10][10], temp[10];
	printf("Enter the number of names : ");
	scanf("%d", &n);
	printf("Enter %d names : ", n);
	for(i=0; i<n; i++)
	{
		scanf("%s", name[i]);
	}
	printf("\nThe given array names are : ");
	for(i=0; i<n; i++)
	{
		printf("%s\t", name[i]);
	}
	for(i=0; i<n-1; i++)
	{
		for(j=i+1; j<n; j++)
		{
			if(strcmpi(name[i], name[j]) > 0)
			{
				strcpy(temp, name[i]);
				strcpy(name[i], name[j]);
				strcpy(name[j], temp);
			}
		}
	}
	printf("\n\nSorted elements : ");
	for(i=0; i<n; i++)
	{
		printf("%s\t", name[i]);
	}
	return 0;
}
