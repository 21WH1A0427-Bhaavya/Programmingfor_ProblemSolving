#include <stdio.h>
main()
{
	char end;
	printf("\nEnter the end alphabet : ");
	scanf("%c", &end);
	
	printf("\nAll the alphabets from A to %c are : \n", end);
	int alphabet = 97;
	while(alphabet<=end)
	{
		printf("%c\n",alphabet);
		alphabet++;
	}
	
}
