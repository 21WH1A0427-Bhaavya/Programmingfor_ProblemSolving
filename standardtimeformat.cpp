#include <stdio.h>
int main()
{
	int sec,min,hour;
	printf("ENTER TIME IN SECONDS = ");
	scanf("%d",&sec);
	min=sec/60;
	hour=sec/3600;
	printf("TIME IN STANDARD TIME FORMAT HH:MM:SS IS %d:%d:%d",hour,min,sec);
}
