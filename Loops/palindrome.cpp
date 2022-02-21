/* PALINDROME */
#include <stdio.h>
int main()
{
	int n,result=0,q,rem;
	printf("\nEnter a number : ");
	scanf("%d", &n);
	q=n;
	while(q!=0)
	{
		rem=q%10;
		result = result*10 + rem;
		q=q/10;
	}
	if(result==n)
	{
		printf("\nThe given number is palindrome");
	}
	else
	printf("\nThe given number is not a palindrome");
}

