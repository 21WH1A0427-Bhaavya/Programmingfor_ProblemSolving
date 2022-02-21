#include <stdio.h>
main()
{
	int days;
	printf("\nENTER A NUMBER IN THE RANGE OF 1 TO 7 =");
	scanf("%d", &days);
	
	switch(days)
	{
		case 1:
			printf("\nMONDAY");
			break;
			
		case 2:
			printf("\nTUESDAY");
			break;
			
		case 3:
			printf("\nWEDNESDAY");
			break;
			
		case 4:
			printf("\nTHURSDAY");
			break;
			
		case 5:
			printf("\nFRIDAY");
			break;
			
		case 6:
			printf("\nSATURDAY");
			break;
			
		case 7:
		    printf("\nSUNDAY");
			break;
			
		default:
		    printf("\nINVALID NUMBER");
	}
}
