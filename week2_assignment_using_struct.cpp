/*Write enumerated types that supports dates�such as december 12. Then add a function that produces a next day.
So nextday(date) of december 12 is december 13. Also write a function printdate(date) that prints a date legibly.
The function can assume that February has 28 days and it most know how many days are in each month. 
Use a struct with two members; one is the month and the second  is the day of the month�an int (or short).*/

#include <stdio.h>
typedef enum month{ jan, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec} month;
typedef struct date
{
	month m;
	int d;
	
}date;
int max_days, n;

void print_date(date* dt)
{

    switch(dt-> m) 
    {
        case jan:
            printf("January %d", dt-> d);
            max_days = 31;
            break;
        case feb:
        	printf("February %d", dt->d);
            max_days = 28;
            break;
        case mar:
            printf("March %d", dt-> d);
            max_days = 31;
            break;
        case apr:
            printf("April %d", dt-> d);
            max_days = 30;
            break;
        case may:
            printf("May %d", dt-> d);
            max_days = 31;
            break;
        case jun:
            printf("June %d", dt-> d);
            max_days = 30;
            break;
        case jul:
            printf("July %d", dt->d);
            max_days = 31;
            break;
        case aug:
            printf("August %d", dt-> d);
            max_days = 31;
            break;
        case sep:
            printf("September %d", dt-> d);
            max_days = 30;
            break;
        case oct:
            printf("October %d", dt-> d);
            max_days = 31;
            break;
        case nov:
            printf("November %d", dt-> d);
            max_days = 30;
            break;
        case dec:
            printf("December %d", dt-> d);
            max_days = 31;
            break;
    }
}
month next_month(date* dt)
{

    switch(dt-> m)
    {
        case jan:
        	return feb;
            break;
        case feb:
        	return mar;
            break;
        case mar:
            return apr;
            break;
        case apr:
            return may;
            break;
        case may:
            return jun;
            break;
        case jun:
            return jul;
            break;
        case jul:
           return aug;
            break;
        case aug:
            return sep;
            break;
        case sep:
            return oct;
            break;
        case oct:
            return nov;
            break;
        case nov:
            return dec;
            break;
        case dec:
            return jan;
            break;
    }
}
date* next_day(date* dt) 
{
    if (dt->d == max_days) 
    {
        dt->d = (dt->d + 1) % max_days;
        dt->m = next_month(dt);
    }
    else 
        dt->d += 1;
    return dt;
}

int main()
{
	//Given dates
    date date1 = {feb, 28}; 
    date date2 = {mar, 14};
    date date3 = {oct, 31};
    date date4 = {dec, 31};
    date dates[] = {date1, date2, date3, date4};
    
    for (n=0; n<4; n++) 
    {
        printf("Given date : ");
        print_date(&dates[n]);
        printf("\nThe next day is ");
        next_day(&dates[n]);
        print_date(&dates[n]);
        printf("\n\n");
    }
	return 0;
}
