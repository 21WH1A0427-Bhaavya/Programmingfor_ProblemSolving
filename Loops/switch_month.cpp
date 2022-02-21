#include <stdio.h>
main() 
{
	int month;
	printf("Enter the month number (1 - 12): ");
	scanf("%d",&month);
	switch (month)
	{
		case 1:
			printf("\nNumber of days : 31");
			break;
	    case 2:
	    	printf("\nNumber of days : 30");
	    	break;
	    case 3:
	    	printf("\nNumber of days : 31");
	    	break;
	    case 4:
	    	printf("\nNumber of days : 30");
	    	break;
	    case 5:
	    	printf("\nNumber of days : 31");
	    	break;
	    case 6:
	    	printf("\nNumber of days : 30");
	    	break;
	    case 7:
	    	printf("\nNumber of days : 31");
	    	break;
	    case 8:
	    	printf("\nNumber of days : 31");
	    	break;
	    case 9:
	    	printf("\nNumber of days : 30");
	    	break;
	    case 10:
	    	printf("\nNumber of days : 31");
	    	break;
	    case 11:
	    	printf("\nNumber of days : 30");
	    	break;
	    case 12:
	    	printf("\nNumber of days : 31");
	    	break;
	    default :
		    printf("\nInvalid number");
	}
	
}
