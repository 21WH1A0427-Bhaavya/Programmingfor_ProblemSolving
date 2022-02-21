#include <stdio.h>
main()
{
    printf("\nAll the even numbers from 1 to 100 are : \n");
	int number = 1;
	while(number<=100)
	{
		if(number%2==0)
		printf("%d\n",number);
		number++;
	}
}
