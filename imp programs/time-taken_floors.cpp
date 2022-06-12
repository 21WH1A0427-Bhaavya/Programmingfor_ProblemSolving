#include <stdio.h>
#include <math.h>
#define a 9.8
int main()
{
	int floors, i;
	float time, s, height;
	printf("Enter the number of floors and height of each floor : ");
	scanf("%d %f", &floors, &height);
	s = height;
	for(i=floors; i>=0; i--)
	{
		time = 0.0;
		time = sqrt(2*s/a);
		s = s + height;
		printf("Time taken to reach floor %d is %f\n", i, time);
	}
}
