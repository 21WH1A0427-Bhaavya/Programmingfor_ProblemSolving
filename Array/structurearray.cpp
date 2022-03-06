#include <stdio.h>
struct book
{
	char book_name[30];
	int book_id;
	char author[30];
	float price;
}b[50];
int main()
{
	int i,n;
	printf("Enter the number of books : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the book name : ");
		scanf("%s", &b[i].book_name);
		fgets(b[i].book_name,80,stdin);
		printf("Enter the author name : ");
		fgets(b[i].author,80,stdin);
		printf("Enter the book ID : ");
		scanf("%d", &b[i].book_id);
		printf("Enter the price of the book : ");
		scanf("%f", &b[i].price);
		fflush(stdin);
	}
	printf("\nThe details of the book are : \n\n");
	for(i=0;i<n;i++)
	{
		printf("Book : %s", b[i].book_name);
		printf("Author : %s", b[i].author);
		printf("Book ID : %d\n",b[i].book_id);
		printf("Price : %0.2f\n",b[i].price);
	}
}

