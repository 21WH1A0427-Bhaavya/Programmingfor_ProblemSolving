#include <stdio.h>
int main()
{
	int num,rem,result=0,n;
	printf("Enter the number : ");
	scanf("%d",&num);
	n = num;
	while(n!=0)
	{
		rem = n%10;
		result = result*10 + rem;
		n = n/10;
	}
	if(result == num)
	printf("\nThe given number %d is a palindrome",num);
	else
	printf("\nThe given number %d is not a palindrome",num);
}
