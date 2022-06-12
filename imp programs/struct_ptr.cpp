#include <stdio.h>
#include <string.h>
struct Books
{	char title[20];
	char author[20];
	char subject[20];
	int id; };
int printBook(struct Books *book);
int main()
{
	struct Books book1;
	struct Books book2;
	strcpy(book1.title, "Mystic Poems");
	strcpy(book1.author, "Sadhguru");
	strcpy(book1.subject, "Poetry");
	book1.id = 427;
	
	strcpy(book2.title, "Normal People");
	strcpy(book2.author, "Sally Rooney");
	strcpy(book2.subject, "Fiction");
	book2.id = 428;
	printBook(&book1);
	printf("\n");
	printBook(&book2);
}
int printBook(struct Books *book)
{
	printf("Book title : %s\n", book->title);
	printf("Book author : %s\n", book->author);
	printf("Book subject : %s\n", book->subject);
	printf("Book ID : %d\n", book->id);
}
