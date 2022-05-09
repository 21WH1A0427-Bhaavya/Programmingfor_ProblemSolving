#include <stdio.h>
int main()
{
	int num, i, rev=0, temp, rem;
	printf("Enter the number : ");
	scanf("%d", &num);
	temp = num;
	while(temp>0)
	{
		rem = temp%10;
		rev = rev*10 + rem;
		temp = temp/10; 
	}
	if(rev==num)
	printf("The given number %d is a palindrome", num);
	else
	printf("The given number %d is not a palindrome", num);
}
