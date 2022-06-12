 #include <stdio.h>
int armstrong(int number);
int prime(int number);
int perfect(int number);
int main()
{
	int number;
	printf("Enter a number : ");
	scanf("%d", &number);

	if(armstrong(number)==0)
	{
		printf("%d is an armstrong number.", number);
	}
	else
	{
		printf("%d is not an armstrong number.", number);
	}
	if(prime(number)==0)
	{
		printf("\n%d is a prime number.", number);
	}
	else
	{
		printf("\n%d is not a prime number.", number);
	}
	if(perfect(number)==0)
	{
		printf("\n%d is a perfect number.", number);
	}
	else
	{
		printf("\n%d is not a perfect number.", number);
	}
	return 0;
}
int armstrong(int number)
{
	int rem, result=0, i, temp;
	temp = number;
	while(temp!=0)
	{
		rem = temp%10;
		result = result + rem*rem*rem;
		temp = temp/10;
	}
	if(result==number)
	return 0;
	else
	return 1;
}
int prime(int number)
{
	int count=0,i;
	for(i=1;i<=number;i++)
	{
		if(number%i==0)
		count++;
	}
	if(count==2)
	return 0;
	else
	return 1;
}
int perfect(int number)
{
	int sum=0,i,temp;
	temp=number;
	for(i=1;i<temp;i++)
	{
		sum += i;
	}
	if(number==sum)
	return 0;
	else
	return 1;
}
