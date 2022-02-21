#include <stdio.h>
main()
{
	int num,n,sum=0;
	printf("\nENTER THE LIMIT NUMBER : ");
	scanf("%d", &n);
	for(num=1;num<=n;num+=1)
	{
		sum+=num;
	}
	printf("\nSUM OF NATURAL NUMBERS FROM 1 TO %d IS %d",n,sum);
}
