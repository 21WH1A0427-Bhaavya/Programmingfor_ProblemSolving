#include<stdio.h>
main()
{
	float classes_held,classes_attended,percentage;
	printf("\nTotal number of classes :");
	scanf("%f",&classes_held);
	printf("\nTotal number of classes attended :");
	scanf("%f",&classes_attended);
	percentage=(classes_attended/classes_held)*100; 
	
	if(percentage>=75)
	printf("\nTHE STUDENT IS ALLOWED TO SIT FOR THE EXAM");
	else
	printf("\nTHE STUDENT IS NOT ALLOWED TO SIT FOR THE EXAM");
}
