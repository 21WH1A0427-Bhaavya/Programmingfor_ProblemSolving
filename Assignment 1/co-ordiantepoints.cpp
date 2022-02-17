#include<stdio.h>
#include <math.h>
int main()
{
	int x1,x2,y1,y2;
	printf("ENTER X1,X2 VALUES =");
	scanf("%d,%d",&x1,&x2);
	printf("\nENTER Y1,Y2 VALUES =");
	scanf("%d,%d",&y1,&y2);
	int distance;
	double result;
	
	distance= (x2-x1)*(x2-x1)+(y2-y1)*(y2-y1);
	result= sqrt(distance);
	
	printf("\nDISTANCE BETWEEN TWO CO-ORDINATES A(X1,X2) AND B(Y1,Y2) IS %lf",result);
}
