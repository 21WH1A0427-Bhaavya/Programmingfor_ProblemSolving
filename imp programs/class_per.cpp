#include <stdio.h>
int main()
{
	float phy, math, pps, eg;
	float total, avg;
	printf("Enter the marks of physics, math, pps and EG : ");
	scanf("%f%f%f%f", &phy, &math, &pps, &eg);
	printf("Marks obtained :\nPHYSICS MATH\tPPS\tEG\n%.2f  \t%.2f\t%.2f\t%.2f\n", phy, math, pps, eg);
	total = phy + math + pps + eg;
	avg = total/4;
	printf("TOTAL = %f\nAVERAGE = %f\n\n\n", total, avg);
	if(avg>=70)
	printf("DISTINCTION\n");
	else if(avg>=60 && avg<70)
	printf("FIRST CLASS\n");
	else if(avg>=40 && avg<60)
	printf("SECOND CLASS\n");
	else
	printf("Failed");
	
}
