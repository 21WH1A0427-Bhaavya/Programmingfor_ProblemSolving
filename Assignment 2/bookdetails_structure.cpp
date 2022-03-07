#include <stdio.h>
struct book
{
	char name[30];
	char author[20];
	int pages;
}b[10];
int main()
{
	int i,n;
	printf("Enter the number of books : ");
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		printf("Enter the name of the book : ");
		scanf("%s",&b[i].name);
		fgets(b[i].name,30,stdin);
		printf("\nEnter the author of the book : ");
		scanf(" %s",&b[i].author);
		fgets(b[i].author,20,stdin);
		printf("\nEnter the number of pages : ");
		scanf("%d",&b[i].pages);
		fflush(stdin);
	}
	printf("The details of books : \n\n");
	for(i=0;i<n;i++)
	{
		printf("Name of the book : %s",b[i].name);
		printf("\nAuthor : %s",b[i].author);
		printf("\nNumber of pages : %d",b[i].pages);
	}
}
