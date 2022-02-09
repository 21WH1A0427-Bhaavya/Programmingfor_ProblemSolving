#include<stdio.h>
int main()
{
	int a,b,c,d,e,positivesum,negativesum,totalsum;
	printf("ENTER VALUES OF A,B,C,D,E where A,B,C ARE POSITIVE AND D,E ARE NEGATIVE =");
	scanf("%d,%d,%d,%d,%d",&a,&b,&c,&d,&e);
	positivesum=a+b+c;
	negativesum=d+e;
	totalsum=a+b+c+d+e;
	printf("SUM OF POSITIVE NUMBERS IS A+B+C = %d ",positivesum);
	printf("\nSUM OF NEGATIVE NUMBERS IS D+E = %d",negativesum);
	printf("\nSUM OF ALL POSITIVE AND NEGATIVE NUMBERS IS A+B+C+D+E = %d",totalsum);
	
}
